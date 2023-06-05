/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:50:19 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 15:50:38 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*left;
	char	*right;

	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	right = strcpy(malloc(sizeof (char) * 10), "world");
	printf("%s", ft_strcat(left, right));
}
