/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:59:57 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/25 15:35:09 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	ualarm(1000,0);
	printf("%i,%i,%i,%i",
		ft_find_next_prime(0),
		ft_find_next_prime(16),
		ft_find_next_prime(INT_MAX),
		ft_find_next_prime(-100));
}