/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:08:03 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 18:43:15 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char*ft_strcpy(char*dest, char*src);

int	main(void)
{
	char	*src_str;
	char	*dest_str;

	src_str = "hello world";
	dest_str = (char *)malloc(sizeof(char) * 20);
	printf("%s", ft_strcpy(dest_str, src_str));
}
