/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:53:05 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/23 17:20:46 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	ualarm(100, 0);
	printf("%i,%i,%i",
		ft_strlen("hello world"),
		ft_strlen("hello \0world"),
		ft_strlen(NULL));
}
