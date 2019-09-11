/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 13:49:10 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	int first;
	int second;

	if (*a && (*a)->next)
	{
		first = (*a)->val;
		second = ((*a)->next)->val;
		(*a)->val = second;
		((*a)->next)->val = first;
	}
}

void	sb(t_stack **b)
{
	int first;
	int second;

	if (*b && (*b)->next)
	{
		first = (*b)->val;
		second = ((*b)->next)->val;
		(*b)->val = second;
		((*b)->next)->val = first;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack **a, t_stack **b, int val)
{
	t_stack *new_node;

	new_node = (t_stack*)ft_memalloc(sizeof(t_stack));
	new_node->val = val;
	new_node->next = (*a);
	(*a) = new_node;
	if ((*b)->next)
	{
		delete_node(*b);
	
	}
		
	else{
		free((*b));
		*b = NULL;
	}
		
}

void	pb(t_stack **b, t_stack **a, int val)
{
	t_stack *new_node;

	new_node = (t_stack*)ft_memalloc(sizeof(t_stack));
	new_node->val = val;
	new_node->next = (*b);
	(*b) = new_node;
	if ((*a)->next)
		delete_node(*a);
	else{
		free((*a));
		*a = NULL;
	}
}
