/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:13:18 by atitus            #+#    #+#             */
/*   Updated: 2019/09/12 10:49:01 by atitus           ###   ########.fr       */
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

	g_a = head;
	minimum = 0;
	count = 0;
	minimum = min(g_a);
	if (minimum == g_a->val)
		call_pb(g_a);
	else if (minimum == g_a->next->val)
		call_sa_pb(g_a);
	else if (minimum == g_a->next->next->val)
		callra_sa_pb(g_a);
	else if (minimum == g_a->next->next->next->val)
		call_rra2_pb(g_a);
	else if (minimum == g_a->next->next->next->next->val)
		call_rra_pb(g_a);
	sort_4(g_a);
	ft_push(&g_a, ft_pop(&g_b));
	ft_putendl("pa");
}

void		sort_4(t_stack *head)
{
	int minimum;

	g_a = head;
	minimum = 0;
	minimum = min(g_a);
	if (minimum == g_a->val)
		call_pb(g_a);
	else if (minimum == g_a->next->val)
		call_sa_pb(g_a);
	else if (minimum == g_a->next->next->val)
		call_rra2_pb(g_a);
	else if (minimum == g_a->next->next->next->val)
		call_rra_pb(g_a);
	sort_3(g_a);
	ft_push(&g_a, ft_pop(&g_b));
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
			ft_push(&g_b, ft_pop(&g_a));
			ft_putendl("pb");
		}
		else
			call_ra_median(g_a);
		data.i++;
	}
}
