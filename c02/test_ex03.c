/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:36:43 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:44:10 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_numeric("345783"),
		ft_str_is_numeric("37895sd"),
		ft_str_is_numeric(""),
		ft_str_is_numeric("asdjkasdhka"));
}
