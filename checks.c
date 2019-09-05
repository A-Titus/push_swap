/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:17 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 11:55:11 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_inst(char *s)
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