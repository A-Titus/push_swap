/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:13:18 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 13:28:27 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sort_3(t_stack *head)
{
	t_stack	*temp;

	temp = head;
	if (temp->val > temp->next->val && temp->val < temp->next->next->val)
		call_sa(temp);
	else if (temp->val > temp->next->val && temp->next->val
			> temp->next->next->val)
		call_sa_rra(temp);
	else if (temp->val > temp->next->val && temp->next->val
			< temp->next->next->val)
		call_ra(temp);
	else if (temp->val < temp->next->val && temp->next->val
			> temp->next->next->val)
		call_sa_ra(temp);
	else if (temp->val < temp->next->val && temp->next->val
			> temp->next->next->val)
		call_rra(temp);
}

void		sort_5(t_stack *head)
{
	int minimum;
	int count;

	a = head;
	minimum = 0;
	count = 0;
	minimum = min(a);
	if (minimum == a->val)
		call_pb(a);
	else if (minimum == a->next->val)
		call_sa_pb(a);
	else if (minimum == a->next->next->val)
		callra_sa_pb(a);
	else if (minimum == a->next->next->next->val)
		call_rra2_pb(a);
	else if (minimum == a->next->next->next->next->val)
		call_rra_pb(a);
	sort_4(a);
	pa(&a, &b, b->val);
	ft_putendl("pa");
}

void		sort_4(t_stack *head)
{
	int minimum;

	a = head;
	minimum = 0;
	minimum = min(a);
	if (minimum == a->val)
		call_pb(a);
	else if (minimum == a->next->val)
		call_sa_pb(a);
	else if (minimum == a->next->next->val)
		call_rra2_pb(a);
	else if (minimum == a->next->next->next->val)
		call_rra_pb(a);
	sort_3(a);
	pa(&a, &b, b->val);
	ft_putendl("pa");
}

void		push_median(t_stack **head)
{
	struct s_median data;

	data.current = NULL;
	data.current = *head;
	data.size = list_size(data.current);
	data.i = 1;
	data.q2 = find_q2(data.current);
	data.median = find_median(data.current);
	data.middle_val = middle(*head);
	while (data.i <= (data.size))
	{
		data.current = *head;
		if (data.current->val > data.q2 && data.current->val <= data.median)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
			call_ra_median(a);
		data.i++;
	}
}
