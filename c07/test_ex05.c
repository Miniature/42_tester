/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:26:54 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/01 12:28:52 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(void)
{
	char	**strs;

	strs = ft_split("abc  def,ghi", " ,");
	printf("%s,%s,%p", strs[0], strs[2], strs[3]);
}
