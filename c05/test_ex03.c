/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:25:09 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 15:55:21 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%i,%i,%i,%i,%i,%i,%i",
		ft_recursive_power(0, 0),
		ft_recursive_power(0, 1),
		ft_recursive_power(-1, 2),
		ft_recursive_power(2, 4),
		ft_recursive_power(2, 32),
		ft_recursive_power(5, -2),
		ft_recursive_power(5, 0));
}
