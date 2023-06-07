/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:42:04 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 12:44:22 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	function(char *str)
{
	return (str[0]);
}

int	main(void)
{
	char	*strs[] = {"", "", "", "a", NULL};

	printf("%d", ft_any(strs, function));
}
