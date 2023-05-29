/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:13:54 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/25 14:19:06 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%i,%i,%i,%i,%i",
		ft_iterative_factorial(1),
		ft_iterative_factorial(0),
		ft_iterative_factorial(-1),
		ft_iterative_factorial(3),
		ft_iterative_factorial(13));
}
