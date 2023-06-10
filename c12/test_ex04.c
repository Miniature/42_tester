/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:41:44 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 18:50:51 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data);

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	elem->next = NULL;
	elem->data = data;
	return (elem);
}

int	main(void)
{
	t_list	*list;

	list = NULL;
	ft_list_push_back(&list, "a");
	ft_list_push_back(&list, "b");
	ft_list_push_back(&list, "c");
	ft_list_push_back(&list, "d");
	ft_list_push_back(&list, "e");
	printf("%s", list->next->next->next->next->data);
}
