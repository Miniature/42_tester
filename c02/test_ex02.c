/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:32:14 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:38 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_alpha("testASDASA"),
		ft_str_is_alpha(""),
		ft_str_is_alpha("aaaa8945"),
		ft_str_is_alpha("8"));
}
