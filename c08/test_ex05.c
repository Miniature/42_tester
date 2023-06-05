/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:23:56 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/05 15:55:07 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	t_stock_str	*tabs;

	tabs = malloc(sizeof (t_stock_str) * 3);
	tabs[0].copy = "a";
	tabs[0].size = 1;
	tabs[0].str = "a";
	tabs[1].copy = "bb";
	tabs[1].size = 2;
	tabs[1].str = "cc";
	tabs[2].copy = NULL;
	tabs[2].size = 0;
	tabs[2].str = NULL;
	ft_show_tab(tabs);
}
