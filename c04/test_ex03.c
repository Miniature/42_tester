/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:09:59 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/24 16:49:49 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	buffer_6[100];
	char	buffer_7[100];

	sprintf(buffer_6, "%d", INT_MAX);
	sprintf(buffer_7, "%d", INT_MIN);
	ualarm(100, 0);
	printf("%i,%i,%i,%i,%i,%i,%i",
		ft_atoi("44"),
		ft_atoi("-53"),
		ft_atoi(NULL),
		ft_atoi("–2147483648sdfsfs4534533"),
		ft_atoi("     -+++-+-+-+---5dsd"),
		ft_atoi(buffer_6),
		ft_atoi(buffer_7));
}
