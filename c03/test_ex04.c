/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:51:33 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/03 15:28:42 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("%s,", ft_strstr("Foo Bar Baz", "Bar"));
	printf("%s,", ft_strstr("hehehehello world", "hehel"));
	printf("%s,", ft_strstr("Foo Foo Foo", "Bar"));
	printf("%lld", (((long long)(void *)ft_strstr("Foo Foo Foo", "Bar"))));
}
