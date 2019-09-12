/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:24:23 by atitus            #+#    #+#             */
/*   Updated: 2019/09/12 10:44:09 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_inst(t_stack *stack_a, char *instr)
{
	if (ft_strequ(instr, "sa"))
		sa(&stack_a);
	else if (ft_strequ(instr, "sb"))
		sb(&g_b);
	else if (ft_strequ(instr, "ss"))
		ss(&g_a, &g_b);
	else if (ft_strequ(instr, "pa"))
		ft_push(&g_a, ft_pop(&g_b));
	else if (ft_strequ(instr, "pb"))
		ft_push(&g_b, ft_pop(&g_a));
	else if (ft_strequ(instr, "ra"))
		ra(&g_a, 1);
	else if (ft_strequ(instr, "rb"))
		rb(&g_b, 1);
	else if (ft_strequ(instr, "rr"))
		rr(&g_a, &g_b, 1);
	else if (ft_strequ(instr, "rra"))
		rra(&g_a);
	else if (ft_strequ(instr, "rrb"))
		rrb(&g_b);
	else if (ft_strequ(instr, "rrr"))
		rrr(&g_a, &g_b);
	else
		return (-1);
	return (0);
}
