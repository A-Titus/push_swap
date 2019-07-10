/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:16:36 by atitus            #+#    #+#             */
/*   Updated: 2019/05/24 10:24:56 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dst;
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (str);
	dst = str;
	while (i < n)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
