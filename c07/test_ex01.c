/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:41:15 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/31 13:54:45 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*range;

	range = ft_range(0, 100);
	printf("%d,%d,%d,%p", range[0], range[50], range[99], ft_range(20, 20));
}
