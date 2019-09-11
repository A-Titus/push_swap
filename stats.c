/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:16:45 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 15:51:53 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_median(t_stack *head)
{
	t_stack *temp;
	t_stack *ptr1;
	t_stack *ptr2;

	temp = clone(head);
	simple_sort(temp);
	ptr1 = temp;
	ptr2 = temp;
	if (temp != NULL)
	{
		while (ptr2 != NULL && ptr2->next != NULL)
		{
			ptr2 = ptr2->next->next;
			ptr1 = ptr1->next;
		}
	}
	delete_list(&temp);
	return (ptr1->val);
}

int		find_q1(t_stack *head)
{
	t_stack *temp;
	int		mark;
	t_stack *ptr1;
	t_stack *ptr2;

	temp = clone(head);
	simple_sort(temp);
	mark = find_q2(temp);
	ptr1 = temp;
	ptr2 = temp;
	if (temp != NULL)
	{
		while (ptr2->val != mark && ptr2->next->val != mark)
		{
			ptr2 = ptr2->next->next;
			ptr1 = ptr1->next;
		}
	}
	delete_list(&temp);
	return (ptr1->val);
}

int		find_q2(t_stack *head)
{
	t_stack	*temp;
	int		mark;
	t_stack	*ptr1;
	t_stack	*ptr2;

	temp = clone(head);
	simple_sort(temp);
	mark = find_median(temp);
	ptr1 = temp;
	ptr2 = temp;
	if (temp != NULL)
	{
		while (ptr2->val != mark && ptr2->next->val != mark)
		{
			ptr2 = ptr2->next->next;
			ptr1 = ptr1->next;
		}
	}
	delete_list(&temp);
	return (ptr1->val);
}

int		find_q3(t_stack *head)
{
	struct s_chunks chunk;
	t_stack *hold;

	hold = clone(head);
	chunk.temp = hold;
	simple_sort(chunk.temp);
	chunk.mark = find_median(chunk.temp);
	chunk.q3 = find_q4(chunk.temp);
	chunk.ptr1 = chunk.temp;
	chunk.ptr2 = chunk.temp;
	while (chunk.temp->val <= chunk.mark)
	{
		chunk.ptr1 = chunk.ptr1->next;
		chunk.ptr2 = chunk.ptr2->next;
		chunk.temp = chunk.temp->next;
	}
	chunk.temp = NULL;
	chunk.temp = clone(head);
	if (chunk.temp != NULL)
	{
		while (chunk.ptr2->val != chunk.q3 && chunk.ptr2->next->val != chunk.q3)
		{
			chunk.ptr2 = chunk.ptr2->next->next;
			chunk.ptr1 = chunk.ptr1->next;
		}
	}
	delete_list(&hold);
	delete_list(&chunk.temp);
	return (chunk.ptr1->val);
}

int		find_q4(t_stack *head)
{
	struct s_chunks chunk;

	t_stack *hold;
	hold = clone(head);
	chunk.temp = hold;
	simple_sort(chunk.temp);
	chunk.mark = find_median(chunk.temp);
	chunk.ptr1 = chunk.temp;
	chunk.ptr2 = chunk.temp;
	while (chunk.temp->val <= chunk.mark)
	{
		chunk.ptr1 = chunk.ptr1->next;
		chunk.ptr2 = chunk.ptr2->next;
		chunk.temp = chunk.temp->next;
	}
	chunk.temp = NULL;
	if (hold != NULL)
	{
		while (chunk.ptr2 != NULL && chunk.ptr2->next != NULL)
		{
			chunk.ptr2 = chunk.ptr2->next->next;
			chunk.ptr1 = chunk.ptr1->next;
		}
	}
	delete_list(&hold);
	return (chunk.ptr1->val);
}
