/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:32:16 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 09:33:15 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int*tab, int size);

int	main(void)
{
	int	tab[10];
	int	iterator;

	iterator = 9;
	while (iterator >= 0)
	{
		tab[iterator] = iterator + '0';
		iterator--;
	}
	ft_sort_int_tab(tab, 10);
	iterator = 0;
	while (iterator <= 9)
	{
		printf("%c", tab[iterator]);
		fflush(stdin);
		iterator++;
	}
}
