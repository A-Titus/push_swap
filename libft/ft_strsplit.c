/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:42:29 by atitus            #+#    #+#             */
/*   Updated: 2019/06/18 10:38:40 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(const char *str, char c)
{
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			size++;
		}
	}
	return (size++);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		col;
	int		start;
	char	**tab;

	i = 0;
	col = 0;
	if (!str || !(tab = (char **)malloc(sizeof(char *) * ft_size(str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			tab[col++] = ft_strsub(str, start, i - start);
		}
	}
	tab[col] = NULL;
	return (tab);
}
