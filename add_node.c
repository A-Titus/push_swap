/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:11 by atitus            #+#    #+#             */
/*   Updated: 2019/09/10 12:18:12 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*add_node_a(int argc, char **argv)
{
	struct s_add val;

	val.head = NULL;
	val.temp = val.head;
	val.i = 0;
	if (!valid(argc, argv))
		error();
	while (val.i < argc)
	{
		val.new = (t_stack*)ft_memalloc(sizeof(t_stack));
		val.new->val = ft_atoi(argv[val.i]);
		val.new->next = NULL;
		if (val.temp == NULL)
		{
			val.head = val.new;
			val.temp = val.head;
		}
		else
		{
			val.temp->next = val.new;
			val.temp = val.temp->next;
		}
		val.i++;
	}
	return (val.head);
}

t_stack		*add_node(int argc, char **argv)
{
	struct s_add val;

	val.head = NULL;
	val.temp = val.head;
	val.i = 1;
	if (!valid(argc, argv))
		error();
	while (val.i < argc)
	{
		val.new = (t_stack*)ft_memalloc(sizeof(t_stack));
		val.new->val = ft_atoi(argv[val.i]);
		val.new->next = NULL;
		if (val.temp == NULL)
		{
			val.head = val.new;
			val.temp = val.head;
		}
		else
		{
			val.temp->next = val.new;
			val.temp = val.temp->next;
		}
		val.i++;
	}
	return (val.head);
}
