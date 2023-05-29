/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:37:58 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/27 14:38:09 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	ualarm(100, 0);
	printf("%i,%i,%i,%i,%i,%i,%i,%i,%i",
		ft_atoi_base("555", "0123456789"),
		ft_atoi_base("-bccca", "abcd"),
		ft_atoi_base(NULL, "abcdef"),
		ft_atoi_base("348795", NULL),
		ft_atoi_base("23894", "0"),
		ft_atoi_base("sdfuids", "2346"),
		ft_atoi_base("500", "0123454321"),
		ft_atoi_base("\r\v\t\n\f 5", "012345"),
		ft_atoi_base("-2147483648", "0123456789"));
}