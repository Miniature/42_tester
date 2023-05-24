/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:02:12 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/24 14:10:55 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ualarm(100, 0);
	ft_putnbr(5);
	ft_putnbr(-5);
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MIN);
	ft_putnbr(INT_MIN + 1);
}
