/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex12.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:51:05 by wdavey            #+#    #+#             */
/*   Updated: 2023/05/20 13:35:19 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	mem[256];

	alarm(1);
	strcpy(mem, "\x42\x6f\x6e\x6a\x6f\x75\x72\x20\x6c\x65\x73\x20\x61\x6d\x69\
		\x6e\x63\x68\x65\x73\x09\x0a\x09\x63\x07\x20\x65\x73\x74\x20\x66\x6f\
		\x75\x09\x74\x6f\x75\x74\x09\x63\x65\x20\x71\x75\x20\x6f\x6e\x20");
	ft_print_memory(mem, 40);
}
