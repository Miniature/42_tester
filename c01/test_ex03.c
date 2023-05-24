/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:04:35 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/18 16:12:26 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int*div, int*mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%i %i", div, mod);
}
