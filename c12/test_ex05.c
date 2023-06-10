/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:17:00 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/08 13:41:51 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs);

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
	char	*strs[] = {"ld", "wor", "lo ", "hel"};
	t_list	*list;


	list = ft_list_push_strs(4, strs);
	printf("%s%s%s%s,%p",
		list->data,
		list->next->data,
		list->next->next->data,
		list->next->next->next->data,
		list->next->next->next->next->data);
}
