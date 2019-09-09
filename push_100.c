/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:43:46 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 13:34:10 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_q1(t_stack **head)
{
	struct s_push val;

	val.current = NULL;
	val.current = *head;
	val.size = list_size(val.current);
	val.i = 1;
	val.q1 = find_q1(val.current);
	while (val.i <= (val.size))
	{
		val.current = *head;
		if (val.current->val <= val.q1)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		val.i++;
	}
}

void		push_q2(t_stack **head)
{
	struct s_push val;

	val.current = NULL;
	val.current = *head;
	val.size = list_size(val.current);
	val.i = 1;
	val.q1 = find_q1(val.current);
	val.q2 = find_q2(val.current);
	while (val.i <= (val.size))
	{
		val.current = *head;
		if (val.current->val > val.q1 && val.current->val <= val.q2)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		val.i++;
	}
}

void		push_q3(t_stack **head)
{
	struct s_push val;

	val.current = NULL;
	val.current = *head;
	val.size = list_size(val.current);
	val.i = 1;
	val.q3 = find_q3(val.current);
	val.median = find_median(val.current);
	while (val.i <= (val.size))
	{
		val.current = *head;
		if (val.current->val > val.median && val.current->val <= val.q3)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		val.i++;
	}
}

void		push_q4(t_stack **head)
{
	struct s_push val;

	val.current = NULL;
	val.current = *head;
	val.size = list_size(val.current);
	val.i = 1;
	val.q3 = find_q3(val.current);
	val.q4 = find_q4(val.current);
	while (val.i <= (val.size))
	{
		val.current = *head;
		if (val.current->val > val.q3 && val.current->val < val.q4)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		val.i++;
	}
}

void		push_above_q4(t_stack **head)
{
	struct s_push val;

	val.current = NULL;
	val.current = *head;
	val.size = list_size(val.current);
	val.i = 1;
	val.q4 = find_q4(val.current);
	while (val.i <= (val.size))
	{
		val.current = *head;
		if (val.current->val >= val.q4)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		val.i++;
	}
}
