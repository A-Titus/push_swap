/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:11 by atitus            #+#    #+#             */
/*   Updated: 2019/07/23 09:33:26 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 t_stack *add_node(int argc, char **argv)
{	
	t_stack *b = NULL;
	t_stack *a;
	t_stack *head;
	t_stack *temp;
	int i;

	head = NULL;
	temp = head;
	i = 1;

	while (i < argc)
	{
		t_stack *new;
		new = (t_stack*)malloc(sizeof(t_stack));
		new->val = ft_atoi(argv[i]);
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
	a = head;
	pb(&b,&a, a->val);
	sa(&a);
	pb(&b,&a, a->val);
	sb(&b);
	pa(&a, &b, b->val);
	pa(&a, &b, b->val);
printf("%s\n", "LIST A");
print_list(a);

printf("%s\n", "LIST B");
print_list(b);
	return (a);
}
