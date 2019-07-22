/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:53:31 by atitus            #+#    #+#             */
/*   Updated: 2019/07/22 08:36:24 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack **head_ref, int k) 
{ 
       	if (k == 0)
		return; 
	t_stack	*current = *head_ref;		//fix acording to norm;
	int count = 1; 
	while (count < k && current != NULL) 
	{ 
		current = current->next;
		count++; 
	}
	if (current == NULL)
		return; 
	t_stack *kthNode = current;	//fix according to norm;
	while (current->next != NULL) 
		current = current->next; 
	current->next = *head_ref; 
	*head_ref = kthNode->next; 
	kthNode->next = NULL; 
}

void rb(t_stack **head_ref, int k) 
{ 
       	if (k == 0)
		return; 
	t_stack	*current = *head_ref;		//fix according to norm;
	int count = 1; 
	while (count < k && current != NULL) 
	{ 
		current = current->next;
		count++; 
	}
	if (current == NULL)
		return; 
	t_stack *kthNode = current;
	while (current->next != NULL) 
		current = current->next; 
	current->next = *head_ref; 
	*head_ref = kthNode->next; 
	kthNode->next = NULL; 
}

void rr(t_stack **a_ref, t_stack **b_ref, int i)
{
	ra(a_ref, i);
	rb(b_ref, i);
}
