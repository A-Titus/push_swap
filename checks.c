/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:17 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 12:19:33 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_inst(char *s)
{
	if
		(ft_strcmp(s, "sa") == 0
		|| ft_strcmp(s, "sb") == 0
		|| ft_strcmp(s, "ss") == 0
		|| ft_strcmp(s, "pa") == 0
		|| ft_strcmp(s, "pb") == 0
		|| ft_strcmp(s, "ra") == 0
		|| ft_strcmp(s, "rb") == 0
		|| ft_strcmp(s, "rr") == 0
		|| ft_strcmp(s, "rra") == 0
		|| ft_strcmp(s, "rrb") == 0
		|| ft_strcmp(s, "rrr") == 0)
		return (1);
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
		if (check_size(ft_atoll(argv[i])))
			return (0);
		i++;
	}
	if (check_dup(argc, argv))
		return (0);
	return (1);
}
