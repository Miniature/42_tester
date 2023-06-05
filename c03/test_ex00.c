/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:23:33 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 15:50:23 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%i %i %i %i",
		ft_strcmp("this is a test string", "this is a test string"),
		ft_strcmp("this is a test\0string", "this is a test"),
		ft_strcmp("hello world", "hello") > 0,
		ft_strcmp("hello", "hello world") < 0);
}
