/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:03:03 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 11:25:59 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_pb(t_stack *head)
{
	a = head;
	pb(&b, &a, a->val);
	ft_putendl("pb");
}

void	call_sa_pb(t_stack *head)
{
	a = head;
	sa(&a);
	pb(&b, &a, a->val);
	ft_putendl("sa");
	ft_putendl("pb");
}

void	callra_sa_pb(t_stack *head)
{
	a = head;
	ra(&a, 1);
	sa(&a);
	pb(&b, &a, a->val);
	ft_putendl("ra");
	ft_putendl("sa");
	ft_putendl("pb");
}

void	call_rra2_pb(t_stack *head)
{
	a = head;
	rra(&a);
	rra(&a);
	pb(&b, &a, a->val);
	ft_putendl("rra");
	ft_putendl("rra");
	ft_putendl("pb");
}

void	call_rra_pb(t_stack *head)
{
	a = head;
	rra(&a);
	pb(&b, &a, a->val);
	ft_putendl("rra");
	ft_putendl("pb");
}
