/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:00:51 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/08 17:22:09 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ft_list.h"

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)());

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

void	p(void *s)
{
	printf("%c", *((char *)s));
}

int	c(void *s, void *t)
{
	return (!(*((char *)t) == *((char *)s)));
}

int	main(void)
{
	t_list	*head;
	t_list	*end;

	head = ft_create_elem("a");
	end = head;
	for(int iii = 0; iii < 5; iii++)
	{
		end->next = ft_create_elem(&("bcdefghi"[iii]));
		end = end->next;
	}
	ft_list_foreach_if(head, p, "a", c);
}
