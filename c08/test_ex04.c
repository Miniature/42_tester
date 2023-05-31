/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:50:16 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/31 16:00:06 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	t_stock_str	*stock;
	char		*strs[] = {"a", "b", "c"};

	stock = ft_strs_to_tab(3, strs);
	printf("%s,%d,%s",
		stock[0].str,
		stock[1].size,
		stock[2].copy);
}
