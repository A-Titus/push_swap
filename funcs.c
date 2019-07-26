/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:45:19 by atitus            #+#    #+#             */
/*   Updated: 2019/07/26 10:10:15 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_tail(t_stack *stack)
{
	while(stack->next)
		stack = stack->next;
	return (stack);
}

int max(t_stack *head) 
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

int min(t_stack *head)
{
	int min;
	min = head->val;
	while (head != NULL)
	{
		if (min > head->val)
			min = head->val;
		head = head->next;
	}
	return min;
}

int	list_size(t_stack *head)
{
	int count;

	count = 0;
	while(head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
