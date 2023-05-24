/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:12:13 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:20 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	*dest;

	src = "hello world";
	dest = (char *)malloc(sizeof(char) * 20);
	ft_strncpy(dest, src, 20);
	printf("%s%i%i", dest, dest[15], dest[19]);
}
