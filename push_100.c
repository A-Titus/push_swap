/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:43:46 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 10:37:34 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_q1(t_stack **head)
{
	t_stack	*current;
	int		q1;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = list_size(current);
	i = 1;
	q1 = find_q1(current);
	while (i <= (size))
	{
		current = *head;
		if (current->val <= q1)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		i++;
	}
}

void		push_q2(t_stack **head)
{
	t_stack	*current;
	int		q1;
	int		q2;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = list_size(current);
	i = 1;
	q1 = find_q1(current);
	q2 = find_q2(current);
	while (i <= (size))
	{
		current = *head;
		if (current->val > q1 && current->val <= q2)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		i++;
	}
}

void		push_q3(t_stack **head)
{
	t_stack	*current;
	int		q3;
	int		median;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = list_size(current);
	i = 1;
	q3 = find_q3(current);
	median = find_median(current);
	while (i <= (size))
	{
		current = *head;
		if (current->val > median && current->val <= q3)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		i++;
	}
}

void		push_q4(t_stack **head)
{
	t_stack	*current;
	int		q3;
	int		q4;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = list_size(current);
	i = 1;
	q3 = find_q3(current);
	q4 = find_q4(current);
	while (i <= (size))
	{
		current = *head;
		if (current->val > q3 && current->val < q4)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		i++;
	}
}

void		push_above_q4(t_stack **head)
{
	t_stack	*current;
	int		q4;
	int		size;
	int		i;

	current = NULL;
	current = *head;
	size = list_size(current);
	i = 1;
	q4 = find_q4(current);
	while (i <= (size))
	{
		current = *head;
		if (current->val >= q4)
		{
			pb(&b, &a, (a)->val);
			ft_putendl("pb");
		}
		else
		{
			ra(&a, 1);
			ft_putendl("ra");
		}
		i++;
	}
}
