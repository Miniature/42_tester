/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:55:59 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/31 14:06:47 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	**range;

	range = malloc(sizeof (int *));
	printf("%d,%d,%d,%d,%d,%p",
		ft_ultimate_range(range, 0, 100),
		(*range)[0],
		(*range)[50],
		(*range)[99],
		ft_ultimate_range(range, 20, 20),
		*range);
}
