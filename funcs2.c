/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:59:18 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 13:27:56 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		simple_sort(t_stack *head)
{
	struct s_sort val;

	val.temp = head;
	val.sort_node = NULL;
	val.help = NULL;
	while (val.temp)
	{
		val.sort_node = val.temp;
		val.help = val.temp->next;
		while (val.help)
		{
			if (val.help->val < val.sort_node->val)
				val.sort_node = val.help;
			val.help = val.help->next;
		}
		if (val.sort_node != val.temp)
		{
			val.sort_value = val.sort_node->val;
			val.sort_node->val = val.temp->val;
			val.temp->val = val.sort_value;
		}
		val.temp = val.temp->next;
	}
}

t_stack		*clone(t_stack *list)
{
	t_stack *result;

	if (list == NULL)
		return (NULL);
	result = (t_stack*)malloc(sizeof(t_stack));
	result->val = list->val;
	result->next = clone(list->next);
	return (result);
}
