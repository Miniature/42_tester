/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:38:59 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 12:41:01 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	printnum(int a)
{
	printf("%d,", a);
	return (a);
}

int	main(void)
{
	int	array[] = {0,1,2,3,4,5,6,7,8,9};

	printf("%d", ft_map(array, 10, printnum)[5]);
}
