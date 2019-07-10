/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:11 by atitus            #+#    #+#             */
/*   Updated: 2019/07/10 15:46:25 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct stack_a *add_node(int argc, char **argv)
{
	stack_a *head;
	stack_a *temp;
	int i;

	head = NULL;
	temp = head;
	i = 1;

	while (i < argc)
	{
		stack_a *new;
		new =(stack_a*)malloc(sizeof(stack_a));
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
	while (temp)
	{
		printf("%d\n", temp->val_a);
		temp = temp->next;
	}
	return (head);
}
