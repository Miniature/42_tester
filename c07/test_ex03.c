/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:07:19 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/06 14:44:44 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define STR_NUM 8
#define STR_LEN 8
#define SEP_LEN 2

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	char	*str;
	char	*sep;

	strs = malloc(sizeof(char *) * 500);
	for(int i = 0; i < STR_NUM; i++)
	{
		strs[i] = malloc(STR_LEN);
		for(int j = 0; j < STR_LEN - 1; j++)
		{
			strs[i][j] = (j % 20) + 'a';
		}
		strs[i][STR_LEN - 1] = '\0';
	}
	sep = malloc(sizeof(char) * SEP_LEN);
	for(int i = 0; i < SEP_LEN; i++)
	{
		sep[i] = (i % 10) + '0';
	}
	str = ft_strjoin(STR_NUM, strs, sep);
	printf("%s", str);
	free(str);
}
