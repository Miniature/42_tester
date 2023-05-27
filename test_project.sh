#!/bin/bash

#used to set terminal colours in the output
export RED="$(tput setaf 1)"
export GREEN="$(tput setaf 2)"
export ORANGE="$(tput setaf 3)"
export PURPLE="$(tput setaf 5)"
export BOLD="$(tput bold)"
export NC="$(tput sgr0)"

#get directory of this script so we can find the test subfolders
export THIS_DIR=`dirname $0`

#tries to be as accurate as possible to an actual moulinette test on an excersize
#takes 2 or 3 arguments ->
#	1: label of the excersize ("ex05", etc)
#	2: the filename (not including PROJECT_PATH) of the source files to compile (eg "ft_putchar.c")
#	3: (optional) a string to compare the program's stdout with
#if argument 3 is not given then stdout will be directed to "$PROJECT_PATH/test_output/$1" for manual inspection
function run_test {
	printf "Testing $1...\n"
	#check to see if extra files have been included in the directory
	if [[ `wc -w <<< "$2" | tr -d ' '` != `ls "$PROJECT_PATH/$1" | wc -l | tr -d ' '` ]]
	then
		printf "${RED}${BOLD}Wrong number of files in the directory.${NC}\n"
	fi
	#norminette returns it cant find specific files that obviously exist when given a folder
	#/shrug
	#`norminette "$PROJECT_PATH/$1"`
	mkdir -p "$PROJECT_PATH/test_output"
	cc -Wall -Wextra -Werror -o "$PROJECT_PATH/test_output/$1.out" "$THIS_DIR/$PROJECT_ID/test_$1.c" "$PROJECT_PATH/$1/$2" -o "$PROJECT_PATH/test_output/a.out"
	$PROJECT_PATH/test_output/a.out
	output=`$PROJECT_PATH/test_output/a.out`
	if [[ -z $3 ]]
	then
		#echo "$output" > "$PROJECT_PATH/test_output/$1"
		printf "\n${ORANGE}${BOLD}No automatic test defined.${NC}\n"
	else
		if [[ "$3" == "$output" ]]
		then
			printf "\n${GREEN}${BOLD}Got expected value for $1!${NC}\n"
		else
			printf "\n${RED}${BOLD}$1 fail: expected %s${NC}\n" "$3"
		fi
	fi
	tput sc
	read -n 1 -srp "Press any key to continue..."
	tput rc
	tput el
	printf "\n"
}

export -f run_test

if [ -z $1 ]
then
	echo "Invalid project id selected."
	exit
fi
if [ -z $2 ]
then
	echo "Invalid $PROJECT_ID path selected."
	exit
fi

export PROJECT_ID=$1
export PROJECT_PATH=$2

#setup output directory
`mkdir -p "test_output"`

sh "$THIS_DIR/$PROJECT_ID/run_tests.sh"

#remove output directory if not used
a=`rmdir "test_output"`