/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/07/19 11:52:06 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_stack *head;

	head = a;
	if (head && head->next)
	{
		t_stack *p = NULL;
		t_stack *q = NULL;
		t_stack *r = NULL;

		p = head;
		q = head->next;
		r = head->next->next;
	
		p->next = r;
		head = q;
		q->next = p;

//		while(head)
//		{
//			printf("%d\n", head->val);
//			head = head->next;
//		}
	}
}
void	sb(t_stack *b)
{
	t_stack *head;

	head = b;
	if (head && head->next)
	{
		t_stack *p = NULL;
		t_stack *q = NULL;
		t_stack *r = NULL;

		p = head;
		q = head->next;
		r = head->next->next;
	
		p->next = r;
		head = q;
		q->next = p;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack **a, t_stack **b, int val)
{
	 t_stack *newNode;
	 
	 newNode = (t_stack*)malloc(sizeof(t_stack));
	 newNode->val = val;
	 newNode->next = (*a);
	 (*a) = newNode;
	 if((*b)->next)
	 	deleteNode(*b);
	 else
	 	 *b = NULL;
	 // fix segfault when deleting last node;
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

	 //fix segfaultlt when deleting last node;
	 //do error chexking;
}
