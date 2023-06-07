/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdavey <wdavey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:51:21 by wdavey            #+#    #+#             */
/*   Updated: 2023/06/07 13:11:38 by wdavey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	function(char *str)
{
	return ('5' >= *str);
}

int	main(void)
{
	char	*strs[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

	printf("%d", ft_count_if(strs, 10, function));
}
