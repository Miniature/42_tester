/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:44:18 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 19:46:23 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char*ft_strlowcase(char *str);

int	main(void)
{
	char	str[20];

	strcpy(str, "ABCXYZ091~[/");
	ft_strlowcase(str);
	printf("%s", str);
}
