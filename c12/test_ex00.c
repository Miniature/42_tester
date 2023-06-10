/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:20:13 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 18:25:31 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_list.h"

t_list *ft_create_elem(void *data);

int	main(void)
{
	t_list	*list;

	list = ft_create_elem("a");
	printf("%s,%p", list->data, list->next);
}
