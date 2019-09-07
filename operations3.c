/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:47:44 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 10:50:57 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **head_ref)
{
	t_stack *sec_last;
	t_stack *last;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
		return ;
	sec_last = NULL;
	last = *head_ref;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *head_ref;
	*head_ref = last;
}

void	rrb(t_stack **head_ref)
{
	t_stack *sec_last;
	t_stack *last;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
		return ;
	sec_last = NULL;
	last = *head_ref;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *head_ref;
	*head_ref = last;
}

void	rrr(t_stack **a_ref, t_stack **b_ref)
{
	rra(a_ref);
	rrb(b_ref);
}
