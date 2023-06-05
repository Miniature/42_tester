printf "\n${ORANGE}${BOLD}No test defined for ex00.${NC}\n\n"

printf "${ORANGE}${BOLD}Testing ex01...${NC}\n"
`cp -R $THIS_DIR/$PROJECT_ID/srcs $PROJECT_PATH/ex01`
printf "\tmake all\n"
(cd $PROJECT_PATH/ex01 && make all)
touch $PROJECT_PATH/ex01/srcs/ft_putchar.c
printf "\n\tmake clean\n"
(cd $PROJECT_PATH/ex01 && make clean)
printf "\n\tmake libft.a\n"
(cd $PROJECT_PATH/ex01 && make libft.a)
printf "\n\tmake re\n"
(cd $PROJECT_PATH/ex01 && make re)
printf "\n\tmake fclean\n"
(cd $PROJECT_PATH/ex01 && make fclean)
printf "${ORANGE}${BOLD}No automatic test defined.${NC}\n"
anykey_continue

test_function ex02 'ft_split.c' 'this is string 0x0'
