norm
printf "${ORANGE}${BOLD}Testing ex00...${NC}\n"
`cp -R $THIS_DIR/$PROJECT_ID/srcs $PROJECT_PATH/ex00`
(cd $PROJECT_PATH/ex00/srcs && sh ../libft_creator.sh && ar -t libft.a)
printf "${ORANGE}${BOLD}No automatic test defined.${NC}\n\n"

printf "${ORANGE}${BOLD}Testing ex01...${NC}\n"
`cp -R $THIS_DIR/$PROJECT_ID/srcs $PROJECT_PATH/ex01`
printf "\tmake all\n"
(cd $PROJECT_PATH/ex01 && make all)
printf .
sleep 0.5
printf .
sleep 0.5
printf .
sleep 0.5
touch -m $PROJECT_PATH/ex01/srcs/ft_putchar.c
printf "\n\tmake libft.a\n"
(cd $PROJECT_PATH/ex01 && make libft.a)
printf "\n\tmake clean\n"
(cd $PROJECT_PATH/ex01 && make clean)
printf "\n\tmake re\n"
(cd $PROJECT_PATH/ex01 && make re)
printf "\n\tmake fclean\n"
(cd $PROJECT_PATH/ex01 && make fclean)
printf "${ORANGE}${BOLD}No automatic test defined.${NC}\n"
anykey_continue

test_function ex02 'ft_split.c' 'this is string 0x0'
