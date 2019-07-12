/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:11 by atitus            #+#    #+#             */
/*   Updated: 2019/07/12 11:22:06 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 t_stacka *add_node(int argc, char **argv)
{
	t_stacka *head;
	t_stacka *temp;
	int i;

	head = NULL;
	temp = head;
	i = 1;

	while (i < argc)
	{
		t_stacka *new;
		new =(t_stacka*)malloc(sizeof(t_stacka));
		new->val_a = ft_atoi(argv[i]);
		new->next = NULL;
		if(temp == NULL)
		{
			head = new;
			temp = head;
		}
		else
		{
			temp->next = new;
			temp = temp->next;
		}
		i++;
	}
	temp = head;
	return (head);
}
