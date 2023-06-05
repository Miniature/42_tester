/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:35:34 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 11:04:17 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

#include <stdio.h>

t_bool ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int main(void)
{
	printf("%d,%d,%d,%d,%s,%s,%d",
		TRUE,
		FALSE,
		ft_is_even(1),
		ft_is_even(2),
		EVEN_MSG,
		ODD_MSG,
		SUCCESS);
	write(1, "a", 1);
}
