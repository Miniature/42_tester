/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:55:15 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 18:15:59 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	cmp(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a2[] = {0, 1, 2, 3, 4, 0, 5, 6, 7, 8};

	printf("%d, %d", ft_is_sort(a1, 10, cmp), ft_is_sort(a2, 10, cmp));
}
