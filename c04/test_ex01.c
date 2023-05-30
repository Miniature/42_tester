/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:57:42 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/30 14:40:43 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	ualarm(100, 0);
	ft_putstr("hello\0world");
	ft_putstr("hello world");
}
