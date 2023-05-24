/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:00:00 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/19 19:43:13 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char*ft_strupcase(char*str);

int	main(void)
{
	char	str[20];

	strcpy(str, "abcxyz091~[/");
	ft_strupcase(str);
	printf("%s", str);
}
