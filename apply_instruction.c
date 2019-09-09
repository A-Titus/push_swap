/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:24:23 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:26:13 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	apply_inst(t_stack *a, t_stack *b, char *instr)
{
	if (ft_strequ(instr, "sa"))
		sa(&a);
	else if (ft_strequ(instr, "sb"))
		sb(&b);
	else if (ft_strequ(instr, "ss"))
		ss(&a, &b);
	else if (ft_strequ(instr, "pa"))
		pa(&a, &b, b->val);
	else if (ft_strequ(instr, "pb"))
		pb(&b, &a, a->val);
	else if (ft_strequ(instr, "ra"))
		ra(&a, 1);
	else if (ft_strequ(instr, "rb"))
		rb(&b, 1);
	else if (ft_strequ(instr, "rr"))
		rr(&a, &b, 1);
	else if (ft_strequ(instr, "rra"))
		rra(&a);
	else if (ft_strequ(instr, "rrb"))
		rrb(&b);
	else if (ft_strequ(instr, "rrr"))
		rrr(&a, &b);
	else
		return (-1);
	return (0);
}
