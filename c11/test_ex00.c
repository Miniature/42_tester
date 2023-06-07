/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:34:38 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 12:38:05 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	printnum(int a)
{
	printf("%d", a);
}

int	main(void)
{
	int	array[] = {0,1,2,3,4,5,6,7,8,9};

	ft_foreach(array, 10, printnum);
}
