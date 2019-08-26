/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:37:46 by atitus            #+#    #+#             */
/*   Updated: 2019/07/19 11:33:22 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void deleteNode( t_stack *node )
{
    	t_stack *temp = node->next;
    	node->val = node->next->val;
    	node->next = temp->next;
    	free(temp);
}
