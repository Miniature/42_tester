/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:46:03 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/24 18:55:48 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%i %i %i %i %i",
		ft_strncmp("this is a test string", "this is a test string", 32),
		ft_strncmp("this is a test string", "this is a test", 14),
		ft_strncmp("this isnt a test string", "this is a test", 7),
		ft_strncmp("hello world", "hello", 10) > 0,
		ft_strncmp("hello", "hello world", 10) < 0);
}
