/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:13:18 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:27:11 by atitus           ###   ########.fr       */
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

void		sort_5(t_stack *a, t_stack *b)
{
	int minimum;
	int count;

	minimum = 0;
	count = 0;
	minimum = min(a);
	if (minimum == a->val)
		call_pb(a, b);
	else if (minimum == a->next->val)
		call_sa_pb(a, b);
	else if (minimum == a->next->next->val)
		callra_sa_pb(a, b);
	else if (minimum == a->next->next->next->val)
		call_rra2_pb(a, b);
	else if (minimum == a->next->next->next->next->val)
		call_rra_pb(a, b);
	sort_4(a, b);
	pa(&a, &b, b->val);
	ft_putendl("pa");
}

void		sort_4(t_stack *a, t_stack *b)
{
	int minimum;

	minimum = 0;
	minimum = min(a);
	if (minimum == a->val)
		call_pb(a, b);
	else if (minimum == a->next->val)
		call_sa_pb(a, b);
	else if (minimum == a->next->next->val)
		call_rra2_pb(a, b);
	else if (minimum == a->next->next->next->val)
		call_rra_pb(a, b);
	sort_3(a);
	pa(&a, &b, b->val);
	ft_putendl("pa");
}

void		push_median(t_stack **a, t_stack **b)
{
	struct s_median data;

	data.current = NULL;
	data.current = *a;
	data.size = list_size(data.current);
	data.i = 1;
	data.q2 = find_q2(data.current);
	data.median = find_median(data.current);
	data.middle_val = middle(*a);
	while (data.i <= (data.size))
	{
		data.current = *a;
		if (data.current->val > data.q2 && data.current->val <= data.median)
		{
			pb(b, a, (*a)->val);
			ft_putendl("pb");
		}
		else
			call_ra_median(*a);
		data.i++;
	}
}
