/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:33:27 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/31 15:40:23 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	main(void)
{
	ft_putchar('a');
	ft_swap(NULL, NULL);
	ft_putstr(NULL);
	ft_strlen(NULL);
	ft_strcmp(NULL, NULL);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void ft_putstr(char *str)
{
	write(1, &str, 1);
}

int ft_strlen(char *str)
{
	return write(1, &str, 1);
}

int ft_strcmp(char *s1, char *s2)
{
	write(1, &s1, 1);
	return write(1, &s2, 1);
}
