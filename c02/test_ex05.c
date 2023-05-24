/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:42:09 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:51 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_uppercase("sdhjksdfkj"),
		ft_str_is_uppercase("sdfhjkdsAAA"),
		ft_str_is_uppercase(""),
		ft_str_is_uppercase("435834"));
}
