/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 08:39:22 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 11:30:41 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_size(long n)
{
	return (n < MAX_INT && n > MIN_INT);
}

int		check_dup(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		is_num(char *str)
{
	int i;

	i = 0;
	if (!ft_strlen(str))
		return (0);
	if (str[i] == '\0')
		return (0);
	if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_spaces(char *s)
{
	while (*s)
	{
		if (*s == ' ')
			return (1);
		s++;
	}
	return (0);
}


int		valid(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (!is_num(argv[i]))
			return (0);
		i++;
	}
	if (check_dup(argc, argv))
		return (0);
	return (1);
}