/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:42 by atitus            #+#    #+#             */
/*   Updated: 2019/09/04 16:09:43 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	ko_exit(void)
{
	ko();
	exit(1);
}

long	ft_atoi_l(const char *str)
{
	long	sum;
	int		i;
	int		neg;

	if (!str || !*str)
		return (0);
	i = 0;
	neg = 0;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg = 1;
	sum = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum *= 10;
		sum += str[i] - '0';
		i++;
	}
	return (neg ? -sum : sum);
}

void	error_free(void *p)
{
	free(p);
	error();
}