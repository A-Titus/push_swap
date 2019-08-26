/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:24:23 by atitus            #+#    #+#             */
/*   Updated: 2019/08/26 16:30:36 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		apply_ins(t_stack *stack_a, t_stack *stack_b, char *line)
{
	if(ft_strcmp(line, "sa") == 0)
		sa(&stack_a);
	else if(ft_strcmp(line, "sb") == 0)
		sb(&stack_b);
	else if(ft_strcmp(line, "ra") == 0)
		ra(&stack_a, 1);
	else if(ft_strcmp(line, "rb") == 0)
		rb(&stack_b, 1);
	else if(ft_strcmp(line, "rra") == 0)
		rra(&stack_a);
	else if(ft_strcmp(line, "rrb") == 0)
		rrb(&stack_b);
	else if(ft_strcmp(line, "pa") == 0)
		pa(&stack_a, &stack_b, stack_b->val);
	else if(ft_strcmp(line, "pb") == 0)
		pb(&stack_b, &stack_a, stack_a->val);
	else if(ft_strcmp(line, "ss") == 0)
		ss(&stack_a, &stack_b);
	else if(ft_strcmp(line, "rr") == 0)
		rr(&stack_a, &stack_b, 1);
	else if(ft_strcmp(line, "rrr") == 0)
		rrr(&stack_a, &stack_b);
	else
		ft_putendl("ERROR");
}
