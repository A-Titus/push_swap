/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:51:14 by atitus            #+#    #+#             */
/*   Updated: 2019/06/06 08:57:54 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	if (str2 == str1)
		return (str1);
	dest = (char *)str1;
	src = (const char *)str2;
	i = 0;
	if (src < dest)
		while (++i <= n)
			dest[n - i] = src[n - i];
	else
		while (n-- > 0)
			*(dest++) = *(src++);
	return (str1);
}
