/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 08:39:22 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 11:42:19 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoll(char *str)
{
	long long	i;
	long long	sign;
	long long	num;

	i = 0;
	sign = 1;
	num = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

int	check_size(long n)
{
	if ((n < -2147483648) || (n > 2147483647))
		return (1);
	else
		return(0);
		
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
		if(check_size(ft_atoll(argv[i])))
			return(0);
		i++;
	}
	if (check_dup(argc, argv))
		return (0);
	return (1);
}