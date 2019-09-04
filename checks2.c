/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:26 by atitus            #+#    #+#             */
/*   Updated: 2019/09/04 16:09:27 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

int		check_sorted(t_stack *s, int (*cmp)(int, int))
{
	if (!s)
		return (1);
	while (s->next)
	{
		if ((*cmp)(s->num, s->next->num) == 0)
			break ;
		s = s->next;
	}
	return (!s->next);
}

int		check_sorted_upto(t_stack *s, int upto, int (*cmp)(int, int))
{
	if (!s)
		return (upto == 0);
	if (!s->next)
		return (upto == 1);
	while (s->next && --upto)
	{
		if ((*cmp)(s->num, s->next->num) == 0)
			return (0);
		s = s->next;
	}
	return (1);
}

int		check_win(t_stack *a, t_stack *b)
{
	return (check_sorted(a, &lt) && !b);
}

void	check_print(char *str, int *flags, t_stack *stack_a,
								t_stack *stack_b)
{
	if (flags[1])
	{
		ft_putstr(BLUE);
		ft_putstr(str);
		ft_putstr(RESET);
		ft_putstr("\n");
	}
	else
		ft_putendl(str);
	if (flags[0])
		print(stack_a, stack_b, flags[1]);
}
