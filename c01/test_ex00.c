/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:57:10 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/22 12:16:20 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include <signal.h>

void	ft_ft(int*nbr);

int	main(void)
{
	int	*test_int;

	test_int = malloc(sizeof(int));
	*test_int = 0;
	ft_ft(test_int);
	printf("%i", *test_int);
}
