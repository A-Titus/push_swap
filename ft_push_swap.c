/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:47:15 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 14:06:15 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_a(int argc, char **argv)
{
	int length;

	if (argc >= 3)
	{
		a = add_node_a(argc, argv);
		length = list_size(a);
		if (length == 2)
		{
			if (!is_sorted(a))
			{
				sa(&a);
				ft_putendl("sa");
			}
		}
		else if (length == 3)
		{
			if (!is_sorted(a))
				sort_3(a);
		}
		else if (length == 4)
		{
			if (!is_sorted(a))
				sort_4(a);
		}
		else if (length == 5)
		{
			if (!is_sorted(a))
				sort_5(a);
		}
		else
		{
			if (!is_sorted(a))
			{
				push_above_q4(&a);
				push_sorted(&b);
				push_q4(&a);
				push_sorted(&b);
				push_q3(&a);
				push_sorted(&b);
				push_median(&a);
				push_sorted(&b);
				push_q2(&a);
				push_sorted(&b);
				push_q1(&a);
				push_sorted(&b);
			}
		}
	}
}

void	push_swap(int argc, char **argv)
{
	int length;

	if (argc >= 3)
	{
		a = add_node(argc, argv);
		length = list_size(a);
		if (length == 2)
		{
			if (!is_sorted(a))
			{
				sa(&a);
				ft_putendl("sa");
			}
		}
		else if (length == 3)
		{
			if (!is_sorted(a))
				sort_3(a);
		}
		else if (length == 4)
		{
			if (!is_sorted(a))
				sort_4(a);
		}
		else if (length == 5)
		{
			if (!is_sorted(a))
				sort_5(a);
		}
		else
		{
			if (!is_sorted(a))
			{
				push_above_q4(&a);
				push_sorted(&b);
				push_q4(&a);
				push_sorted(&b);
				push_q3(&a);
				push_sorted(&b);
				push_median(&a);
				push_sorted(&b);
				push_q2(&a);
				push_sorted(&b);
				push_q1(&a);
				push_sorted(&b);
			}
		}
	}
}
