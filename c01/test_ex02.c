/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:28:54 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/18 16:07:44 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int*a, int*b);

int	main(void)
{
	int	*a;
	int	*b;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	*a = 10;
	*b = 15;
	ft_swap(a, b);
	printf("%i %i", *a, *b);
	return (*a != 15 || *b != 10);
}
