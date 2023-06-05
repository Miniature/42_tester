/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:37:31 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 15:51:22 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	ft_sqrt(int nb);

int	main(void)
{
	ualarm(1000, 0);
	printf("%i,%i,%i,%i,%i",
		ft_sqrt(4),
		ft_sqrt(64),
		ft_sqrt(0),
		ft_sqrt(-16),
		ft_sqrt(INT_MAX));
}
