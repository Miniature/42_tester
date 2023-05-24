/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:40:25 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:44:09 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_lowercase("sdhjksdfkj"),
		ft_str_is_lowercase("sdfhjkdsAAA"),
		ft_str_is_lowercase(""),
		ft_str_is_lowercase("435834"));
}
