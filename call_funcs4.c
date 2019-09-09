/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:22:05 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:32:36 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_rrb(t_stack **b)
{
	rrb(b);
	ft_putendl("rrb");
}

void	call_rb(t_stack **b)
{
	rb(b, 1);
	ft_putendl("rb");
}

void	call_pa_b(t_stack **a, t_stack **b)
{
	pa(a, b, (*b)->val);
	ft_putendl("pa");
}
