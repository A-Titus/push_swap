/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:52:07 by atitus            #+#    #+#             */
/*   Updated: 2019/06/06 09:52:16 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	size_t	begin;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	begin = 0;
	end = ft_strlen(s) - 1;
	while (begin < ft_strlen(s) && ft_isspace(s[begin]))
		begin++;
	while (end > begin && ft_isspace(s[end]))
		end--;
	len = end - begin + 1;
	str = ft_strsub(s, begin, len);
	return (str);
}
