/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:46:42 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/23 12:14:34 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_printable("asdahja s'df/vcksd\\34~"),
		ft_str_is_printable("\n \t\v\'\x0B"),
		ft_str_is_printable(""),
		ft_str_is_printable("\x10\x7F\x1F\x09"));
}
