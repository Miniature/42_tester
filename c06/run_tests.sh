test_program ex00 'ft_print_program_name.c' "" "$PROJECT_PATH/test_output/ex00.out"
test_program ex01 'ft_print_params.c' "abc def ghi" # "abc"$'\n'"def"$'\n'"ghi"$'\n'
test_program ex02 'ft_rev_params.c' "abc def ghi" # "abc"$'\n'"def"$'\n'"ghi"$'\n'
test_program ex03 'ft_sort_params.c' "ghi abc def" # "abc"$'\n'"def"$'\n'"ghi"$'\n'
