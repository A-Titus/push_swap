/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:47:15 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 13:08:53 by atitus           ###   ########.fr       */
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
			sort_2(a);
		else if (length == 3)
			call_sort_3(a);
		else if (length == 4)
			call_sort_4(a);
		else if (length == 5)
			call_sort_5(a);
		else
		{
			if (!is_sorted(a))
			{
				call_sort_100();
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
			sort_2(a);
		else if (length == 3)
			call_sort_3(a);
		else if (length == 4)
			call_sort_4(a);
		else if (length == 5)
			call_sort_5(a);
		else
		{
			if (!is_sorted(a))
			{
				call_sort_100();
			}
		}
	}
}
