/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:06:55 by atitus            #+#    #+#             */
/*   Updated: 2019/05/27 08:53:56 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s1;
	char	c1;
	int		i;

	i = 0;
	c1 = (char)c;
	s1 = (char *)str;
	while (n)
	{
		if (s1[i] == c1)
			return (s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
