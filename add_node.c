/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:11 by atitus            #+#    #+#             */
/*   Updated: 2019/09/06 14:44:00 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*add_nodeA(int argc, char **argv)
{
	t_stack	*head;
	t_stack *temp;
	t_stack *new;
	int		i;

	head = NULL;
	temp = head;
	i = 0;

	if (!valid(argc, argv))
	{
		ft_putendl("Error");/////////
		exit(1);
	}
	while (i < argc)
	{
		new = (t_stack*)malloc(sizeof(t_stack));
		new->val = ft_atoi(argv[i]);
		new->next = NULL;
		if (temp == NULL)
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
	a = head;
	return (a);
}

t_stack		*add_node(int argc, char **argv)
{
	t_stack	*head;
	t_stack *temp;
	t_stack *new;
	int		i;

	head = NULL;
	temp = head;
	i = 1;
	if (argc <= 1)
	{
		ft_putendl("No Values Entered");
		exit(1);
	}
	if (!valid(argc, argv))
	{
		ft_putendl("Error");/////////
		exit(1);
	}
	while (i < argc)
	{
		new = (t_stack*)malloc(sizeof(t_stack));
		new->val = ft_atoi(argv[i]);
		new->next = NULL;
		if (temp == NULL)
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
	a = head;
	return (a);
}
