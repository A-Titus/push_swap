/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:03:24 by atitus            #+#    #+#             */
/*   Updated: 2019/06/03 15:04:28 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	if (c == 0)
		return ((char *)str + i);
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return ((char *)str + i);
	}
	return (NULL);
}
