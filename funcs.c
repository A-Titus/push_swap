/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 15:54:39 by atitus            #+#    #+#             */
/*   Updated: 2019/09/06 09:52:27 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*get_tail(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

int			max(t_stack *head)
{
	int max;

	max = 0;
	while (head != NULL)
	{
		if (max < head->val)
			max = head->val;
		head = head->next;
	}
	return (max);
}

int			min(t_stack *head)
{
	int min;

	min = head->val;
	while (head != NULL)
	{
		if (min > head->val)
			min = head->val;
		head = head->next;
	}
	return (min);
}

int			list_size(t_stack *head)
{
	int count;

	count = 0;
	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}

int			is_sorted(t_stack *head)
{
	t_stack *node_ptr;
	int		i;

	node_ptr = head;
	if (!node_ptr)
		return (0);
	i = node_ptr->val;
	node_ptr = node_ptr->next;
	while (node_ptr)
	{
		if (i > node_ptr->val)
			return (0);
		i = node_ptr->val;
		node_ptr = node_ptr->next;
	}
	return (1);
}
