/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:59:30 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/30 13:52:46 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char*left;
	char*right;

	left = strcpy(malloc(sizeof (char) * 50), "hello aaaaaaaaaaaaaaaaaaa");
	left[6] = '\0';
	right = strcpy(malloc(sizeof (char) * 50), "world");
	printf("%s,%c,", ft_strncat(left, right, 6), left[12]);
	free(left);
	left = strcpy(malloc(sizeof (char) * 50), "hello aaaaaaaaaaaaaaaaaaa");
	left[6] = '\0';
	printf("%s,%c", ft_strncat(left, right, 3), left[10]);
	free(left);
}
