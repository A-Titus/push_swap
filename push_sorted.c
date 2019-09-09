/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:36:50 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:19:01 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		middle(t_stack *head)
{
	t_stack		*slow_ptr;
	t_stack		*fast_ptr;
	int			i;

	slow_ptr = head;
	fast_ptr = head;
	i = 0;
	if (head != NULL)
	{
		while (fast_ptr != NULL && fast_ptr->next != NULL)
		{
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
			i++;
		}
	}
	return (i);
}

int		find_dist(t_stack *head)
{
	int		i;
	int		j;
	t_stack	*temp;

	i = 0;
	j = 0;
	temp = head;
	while (temp->val != max(temp))
	{
		temp = temp->next;
		i++;
	}
	while (temp)
	{
		temp = temp->next;
		j++;
	}
	if (i < j)
		return (1);
	else
		return (-1);
}

void	push_sorted(t_stack **a, t_stack **b)
{
	struct s_ps val;

	val.current = NULL;
	val.middle_val = middle(*b);
	val.size = list_size(*b);
	val.i = 1;
	while (val.i > -1)
	{
		val.size = list_size(*b);
		val.current = *b;
		val.max_val = max(*b);
		if (val.size == 0)
		{
			val.i = -1;
			break ;
		}
		if (val.current->val == val.max_val)
			call_pa_b(a, b);
		else if (find_dist(*b) == 1)
			call_rb(b);
		else
			call_rrb(b);
		val.i++;
	}
}
