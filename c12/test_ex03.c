/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:28:58 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 18:40:34 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

int	main(void)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	head->next = malloc(sizeof(t_list));
	head->next->next = malloc(sizeof(t_list));
	head->next->next->next = malloc(sizeof(t_list));
	head->next->next->next->next = malloc(sizeof(t_list));
	head->next->next->next->next->next = NULL;
	head->next->next->next->next->data = "a";
	printf("%s", ft_list_last(head)->data);
}
