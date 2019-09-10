/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:37:46 by atitus            #+#    #+#             */
/*   Updated: 2019/09/10 12:32:58 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	delete_node(t_stack *node)
{
	t_stack *temp;

	temp = node->next;
	node->val = node->next->val;
	node->next = temp->next;
	free(temp);
}
