run_test ex00 ft_strcpy.c "hello world"
run_test ex01 ft_strncpy.c "hello world00"
run_test ex02 ft_str_is_alpha.c "1100"
run_test ex03 ft_str_is_numeric.c "1010"
run_test ex04 ft_str_is_lowercase.c "1010"
run_test ex05 ft_str_is_uppercase.c "0010"
run_test ex06 ft_str_is_printable.c "1010"
run_test ex07 ft_strupcase.c 'ABCXYZ091~[/'
run_test ex08 ft_strlowcase.c 'abcxyz091~[/'
run_test ex09 ft_strcapitalize.c 'This I97s A Long Thingthat Is~A String[/ 345a'
run_test ex10 ft_strlcpy.c 'this is'
run_test ex11 ft_putstr_non_printable.c '\0b\7fstring\1a'
run_test ex12 ft_print_memory.c
