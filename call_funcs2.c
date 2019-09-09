/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:03:03 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 15:57:57 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_pb(t_stack *a, t_stack *b)
{
	pb(&b, &a, a->val);
	ft_putendl("pb");
}

void	call_sa_pb(t_stack *a, t_stack *b)
{
	sa(&a);
	pb(&b, &a, a->val);
	ft_putendl("sa");
	ft_putendl("pb");
}

void	callra_sa_pb(t_stack *a, t_stack *b)
{
	ra(&a, 1);
	sa(&a);
	pb(&b, &a, a->val);
	ft_putendl("ra");
	ft_putendl("sa");
	ft_putendl("pb");
}

void	call_rra2_pb(t_stack *a, t_stack *b)
{
	rra(&a);
	rra(&a);
	pb(&b, &a, a->val);
	ft_putendl("rra");
	ft_putendl("rra");
	ft_putendl("pb");
}

void	call_rra_pb(t_stack *a, t_stack *b)
{
	rra(&a);
	pb(&b, &a, a->val);
	ft_putendl("rra");
	ft_putendl("pb");
}
