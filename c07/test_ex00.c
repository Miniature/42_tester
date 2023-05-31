/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:36:18 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/31 13:38:49 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);

int	main(void)
{
	printf("%s,%s",
		ft_strdup("hello"),
		ft_strdup(""));
	free(ft_strdup(""));
	free(ft_strdup(NULL));
}
