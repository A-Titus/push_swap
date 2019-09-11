/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:03:03 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 10:58:10 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_pb(t_stack *head)
{
	g_a = head;
	pb(&g_b, &g_a, g_a->val);
	ft_putendl("pb");
}

void	call_sa_pb(t_stack *head)
{
	g_a = head;
	sa(&g_a);
	pb(&g_b, &g_a, g_a->val);
	ft_putendl("sa");
	ft_putendl("pb");
}

void	callra_sa_pb(t_stack *head)
{
	g_a = head;
	ra(&g_a, 1);
	sa(&g_a);
	pb(&g_b, &g_a, g_a->val);
	ft_putendl("ra");
	ft_putendl("sa");
	ft_putendl("pb");
}

void	call_rra2_pb(t_stack *head)
{
	g_a = head;
	rra(&g_a);
	rra(&g_a);
	pb(&g_b, &g_a, g_a->val);
	ft_putendl("rra");
	ft_putendl("rra");
	ft_putendl("pb");
}

void	call_rra_pb(t_stack *head)
{
	g_a = head;
	rra(&g_a);
	pb(&g_b, &g_a, g_a->val);
	ft_putendl("rra");
	ft_putendl("pb");
}
