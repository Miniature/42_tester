/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:54:38 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/08 17:00:01 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

void	p(void *a)
{
	printf("%p,", a);
}

int	main(void)
{
	t_list	*list;
	t_list	*end;

	list = ft_create_elem(NULL);
	end = list;
	for(int iii = 0; iii < 5; iii++)
	{
		end->next = ft_create_elem(NULL);
		end = end->next;
	}
	ft_list_clear(list, p);
}
