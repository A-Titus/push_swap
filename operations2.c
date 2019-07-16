/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:53:31 by atitus            #+#    #+#             */
/*   Updated: 2019/07/16 12:02:25 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a)
{
    rotate(&a, 1);
}

void rotate(t_stack **head_ref, int k) 
{ 
       	if (k == 0)
		return; 
	t_stack	*current = *head_ref;
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
