/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:57:32 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/18 16:07:04 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int*********nbr);

int	main(void)
{
	int	*********test_int;

	test_int = malloc(sizeof(int *********));
	*test_int = malloc(sizeof(int ********));
	**test_int = malloc(sizeof(int *******));
	***test_int = malloc(sizeof(int ******));
	****test_int = malloc(sizeof(int *****));
	*****test_int = malloc(sizeof(int ****));
	******test_int = malloc(sizeof(int ***));
	*******test_int = malloc(sizeof(int **));
	********test_int = malloc(sizeof(int *));
	ft_ultimate_ft(test_int);
	printf("%i", *********test_int);
	return (!(*********test_int == 42));
}
