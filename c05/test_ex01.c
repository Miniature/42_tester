/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:13:54 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/25 14:21:22 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%i,%i,%i,%i,%i",
		ft_recursive_factorial(1),
		ft_recursive_factorial(0),
		ft_recursive_factorial(-1),
		ft_recursive_factorial(3),
		ft_recursive_factorial(13));
}
