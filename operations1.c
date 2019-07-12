/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/07/12 11:49:23 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stacka *head)
{
	if (head == NULL || head->next == NULL)
		exit (0);
	t_stacka *p = NULL;
	t_stacka *q = NULL;
	t_stacka *r = NULL;

	p = head;
	q = head->next;
	r = head->next->next;
	
	p->next = r;
	head = q;
	q->next = p;
}

void	sb(t_stackb *head2)
{
	if (head2 == NULL || head2->next == NULL)
		exit (0);
	t_stacka *p = NULL;
	t_stacka *q = NULL;
	t_stacka *r = NULL;

	p = head2;
	q = head2->next;
	r = head2->next->next;
	
	p->next = r;
	head2 = q;
	q->next = p;
}

void	ss(t_stacka *head, t_stackb *head2)
{
	sa(head);
	sb(head2);
}

void	pa(t_stacka)
{
	t_stackb *new;
	new = (t_stackb*)malloc(sizeof(t_stackb));
	new->val_b = 
}


