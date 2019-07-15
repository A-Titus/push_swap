/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/07/15 15:41:19 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	t_stack *head;

	head = a;
	if (head == NULL || head->next == NULL)
		exit (0);
	t_stack *p = NULL;
	t_stack *q = NULL;
	t_stack *r = NULL;

	p = head;
	q = head->next;
	r = head->next->next;
	
	p->next = r;
	head = q;
	q->next = p;


	while(head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}
}

void	sb(t_stack *b)
{
	t_stack *head;

	head = b;
	if (head == NULL || head->next == NULL)
		exit (0);
	t_stack *p = NULL;
	t_stack *q = NULL;
	t_stack *r = NULL;

	p = head;
	q = head->next;
	r = head->next->next;
	
	p->next = r;
	head = q;
	q->next = p;


	while(head)
	{
		printf("%d\n",head->val);
		head = head->next;
	}
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack **a, int val)
{
	 t_stack *newNode;
	 
	 newNode = (t_stack*)malloc(sizeof(t_stack));
	 newNode->val = val;
	 newNode->next = (*a);
	 (*a) = newNode;

	 // add code to pop from list
}

void	pb(t_stack **b, int val)
{
	 t_stack *newNode;
	 
	 newNode = (t_stack*)malloc(sizeof(t_stack));
	 newNode->val = val;
	 newNode->next = (*b);
	 (*b) = newNode;

	 //add code to pop from list
}
