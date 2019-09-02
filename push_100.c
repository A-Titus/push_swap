/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 10:05:25 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 13:42:31 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	push_q4(t_stack **a)
{
    t_stack *current = NULL;
	int q3;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q3 = find_q3_100(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q3 )
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				rra(a);
				ft_putendl("rra");
			}
			i++;
		} 
}

void 	push_q3(t_stack **a)
{
    t_stack *current = NULL;
	int q2;
	int q3;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q2 = find_q2_100(current);
		q3 = find_q3_100(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q2 && current->val <= q3)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				rra(a);
				ft_putendl("rra");
			}
			i++;
		} 
}

void 	push_q2(t_stack **a)
{
    t_stack *current = NULL;
	int q2;
	int q1;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q1 = find_q1_100(current);
		q2 = find_q2_100(current);
		while(i <= (size))
		{   current = *a;
			if(current->val >= q1 && current->val <= q2)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				rra(a);
				ft_putendl("rra");
			}
			i++;
		} 
}

void 	push_q1(t_stack **a)
{
    t_stack *current = NULL;
	int q1;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q1 = find_q1_100(current);
		while(i <= (size))
		{   current = *a;
			if(current->val <= q1)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				rra(a);
				ft_putendl("rra");
			}
			i++;
		} 
}
