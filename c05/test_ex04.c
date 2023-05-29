/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:29:22 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/25 14:36:50 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	printf("%i,%i,%i,%i",
		ft_fibonacci(10),
		ft_fibonacci(2),
		ft_fibonacci(0),
		ft_fibonacci(-3));
}
