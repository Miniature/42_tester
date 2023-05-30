/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:02:12 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/30 13:40:04 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ualarm(100, 0);
	ft_putnbr(0);
	write(1, ",", 1);
	ft_putnbr(5);
	write(1, ",", 1);
	ft_putnbr(-5000);
	write(1, ",", 1);
	ft_putnbr(INT_MAX);
	write(1, ",", 1);
	ft_putnbr(INT_MIN);
	write(1, ",", 1);
	ft_putnbr('M');
}
