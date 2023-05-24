/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:46:03 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/24 12:48:05 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[256];

	strcpy(str, "this i97s a long ThingTHAT is~a string[/ 345a");
	ft_strcapitalize(str);
	printf("%s", str);
}
