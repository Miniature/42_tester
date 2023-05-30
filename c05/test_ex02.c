/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:25:09 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/30 13:57:08 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%i,%i,%i,%i,%i,%i,%i",
		ft_iterative_power(0, 0),
		ft_iterative_power(0, 1),
		ft_iterative_power(-1, 2),
		ft_iterative_power(2, 4),
		ft_iterative_power(2, 32),
		ft_iterative_power(5, -2),
		ft_iterative_power(5, 0));
}