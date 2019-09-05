/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:53:31 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 16:11:00 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **head_ref, int k)
{
	int		count;
	t_stack *current;
	t_stack *kth_node;

	if (k == 0)
		return ;
	current = *head_ref;
	count = 1;
	while (count < k && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return ;
	kth_node = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *head_ref;
	*head_ref = kth_node->next;
	kth_node->next = NULL;
}

void	rb(t_stack **head_ref, int k)
{
	int		count;
	t_stack	*current;
	t_stack *kth_node;

	if (k == 0)
		return ;
	current = *head_ref;
	count = 1;
	while (count < k && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return ;
	kth_node = current;
	while (current->next != NULL)
		current = current->next;
	current->next = *head_ref;
	*head_ref = kth_node->next;
	kth_node->next = NULL;
}

void	rr(t_stack **a_ref, t_stack **b_ref, int i)
{
	ra(a_ref, i);
	rb(b_ref, i);
}
