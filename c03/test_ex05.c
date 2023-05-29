/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:56:36 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/29 13:18:38 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char*left;
	char*right;

	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	right = strcpy(malloc(sizeof (char) * 50), "world");
	printf("%i%s", ft_strlcat(left, right, 3), left);
	free(left);
	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	printf("%i%s", ft_strlcat(left, right, 30), left);
	free(left);
	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	printf("%i%s", ft_strlcat(left, right, 10), left);
	free(left);
	free(right);
}
