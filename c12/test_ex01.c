/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:25:50 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 18:28:43 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data);

int	main(void)
{
	t_list	*list;

	ft_list_push_front(&list, "b");
	ft_list_push_front(&list, "a");
	printf("%s,%s", list->data, list->next->data);
}
