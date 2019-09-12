/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:19:53 by atitus            #+#    #+#             */
/*   Updated: 2019/09/12 11:13:27 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	int first;
	int second;

	if (*a && (*a)->next)
	{
		first = (*a)->val;
		second = ((*a)->next)->val;
		(*a)->val = second;
		((*a)->next)->val = first;
	}
}

void	sb(t_stack **b)
{
	int first;
	int second;

	if (*b && (*b)->next)
	{
		first = (*b)->val;
		second = ((*b)->next)->val;
		(*b)->val = second;
		((*b)->next)->val = first;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

/*create note
t_stack 	*new_node(int val)
{
	t_stack *node;

	node = (t_stack*)ft_memalloc(sizeof(t_stack) * 1);
	node->val = val;
	node->next = NULL;
	return (node);
}

void		ft_push(t_stack **a, int val)
{
	t_stack *to_push;

	to_push = new_node(val);

	to_push->next = (*a);
	(*a) = to_push;
}

void	ft_push(t_stack **s, int n)
{
	t_stack	*new;
	t_stack	*p;

	p = *s;
	new = new_node(n);
	*s = new;
	new->next = p;
}

int		ft_pop(t_stack **stack)
{
	int ret;
	t_stack *temp;

	ret = (*stack)->val;
	temp = (*stack);
	(*stack) = (*stack)->next;
	free(temp);
	return (ret);
}*/

t_stack	*create(int n)
{
	t_stack	*ret;

	ret = malloc(sizeof(t_stack));
	ret->val = n;
	ret->next = NULL;
	return (ret);
}

void	ft_push(t_stack **s, int n)
{
	t_stack	*new;
	t_stack	*p;

	p = *s;
	new = create(n);
	*s = new;
	new->next = p;
}

int		ft_pop(t_stack **s)
{
	t_stack	*p;
	int		n;

	if (!*s)
		exit(-1);
	n = (*s)->val;
	p = *s;
	*s = (*s)->next;
	free(p);
	return (n);
}


