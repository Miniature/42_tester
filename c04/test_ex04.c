/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:31:12 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/25 11:39:12 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ualarm(100, 0);
	ft_putnbr_base(500, "0123456789");
	write(1, " ", 1);
	ft_putnbr_base(-500, "abcdefghij");
	write(1, " ", 1);
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	write(1, " ", 1);
	ft_putnbr_base(345, "mrdoc");
}
