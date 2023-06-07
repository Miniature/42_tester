norm
test_program_with_make ex00 ft_display_file "$THIS_DIR/$PROJECT_ID/test_file" 'abcdef'
test_program_with_make ex01	ft_cat "$THIS_DIR/$PROJECT_ID/test_file" 'abcdef'
test_program_with_make ex02	ft_tail "-c 5 $THIS_DIR/$PROJECT_ID/test_file" 'bcdef'
test_program_with_make ex03	ft_hexdump "$THIS_DIR/$PROJECT_ID/test_file"
