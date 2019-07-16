/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deleteList.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:56:33 by atitus            #+#    #+#             */
/*   Updated: 2019/07/16 10:01:50 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void DeleteList(t_stack **headRef)
{
	t_stack* current;
	t_stack* next;

	current = *headRef;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next; 
	}
	*headRef = NULL; 
}
