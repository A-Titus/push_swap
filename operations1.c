/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/07/23 13:50:11 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include "push_swap.h"

void	sa(t_stack **a)
{
	if (*a && (*a)->next)
	{
		int first;
		int second;
		t_stack *head;

		head = *a;
		first = (*a)->val;
		second = ((*a)->next)->val;
		(*a)->val = second;
		((*a)->next)->val = first;
	}
}

void	sb(t_stack **b)
{
	if (*b && (*b)->next)
	{
		t_stack *head;
		int first;
		int second;

		head = *b;
		first = (*b)->val;
		second = ((*b)->next)->val;
		(*b)->val = second;
		((*b)->next)->val = first;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(&a);
	sb(&b);
}

void	pa(t_stack **a, t_stack **b, int val)
{
//	if(*b && *b->next)
	 t_stack *newNode;
	 
	 newNode = (t_stack*)malloc(sizeof(t_stack));
	 newNode->val = val;
	 newNode->next = (*a);
	 (*a) = newNode;
	 if((*b)->next)
	 	deleteNode(*b);
	 else
	 	 *b = NULL;
	 // do error checking;
}

void	pb(t_stack **b, t_stack **a, int val)
{
	 t_stack *newNode;
	 
	 newNode = (t_stack*)malloc(sizeof(t_stack));
	 newNode->val = val;
	 newNode->next = (*b);
	 (*b) = newNode;
	 if((*a)->next)
	 	 deleteNode(*a);
	 else
	 	 *a = NULL;
	 //do error chexking;
}
