/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_instruct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:35:16 by atitus            #+#    #+#             */
/*   Updated: 2019/07/22 13:56:43 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	sa(&a);
	ft_putendl("sa");
}

void	swap_b(t_stack **b)
{
	sb(&b);
	ft_putendl("sb");
}

void	rotate_a(t_stack **a)
{
	ra(&a, 1);
	ft_putendl("ra");
}

void	rotate_b(t_stack **b)
{
	rb(&b, 1);
	ft_putendl("rb");
}

void	ss_p(t_stack **a, t_stack **b)
{
	sa(&a);
	sb(&b);
}

void	rev_rot_a(t_stack **a)
{
	rra(&a);
	ft_putendl("rra");
}

void	rev_rot_b(t_stack **b)
{
	rrb(&b);
	ft_putendl("rrb");
}

void	push_a(t_stack **a, t_stack **b, int val)
{
	pa(&a, &b, b->val);
	ft_putendl("pa");
}

void	push_b(t_stack **a, t_stack **b, int val)
{
	pb(&b, &a, a->val);
	ft_putendl("pb");
}
