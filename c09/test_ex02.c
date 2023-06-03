/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:02:31 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/03 12:06:49 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**strs;

	strs = ft_split("this is.a ....string", " .");
	printf("%s %s %s %p", strs[0], strs[1], strs[3], strs[4]);
}
