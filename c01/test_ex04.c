/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:10:23 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/18 16:19:15 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int*a, int*b);

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i", a, b);
}
