/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:59:10 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 13:50:35 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	push_q10_500(t_stack **a)
{
    t_stack *current = NULL;
	
	int q9;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q9 = find_q9_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q9)
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

void 	push_q9_500(t_stack **a)
{
    t_stack *current = NULL;
	int q9;
	int q8;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q8 = find_q8_500(current);
		q9 = find_q9_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q8 && current->val <= q9)
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

void 	push_q8_500(t_stack **a)
{
    t_stack *current = NULL;
	int q7;
	int q8;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q8 = find_q8_500(current);
		q7 = find_q7_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q7 )//&& current->val <= q8)
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

void 	push_q7_500(t_stack **a)
{
    t_stack *current = NULL;
	int q7;
	int q6;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q6 = find_q6_500(current);
		q7 = find_q7_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q6 && current->val <= q7)
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

void 	push_q6_500(t_stack **a)
{
    t_stack *current = NULL;
	int q5;
	int q6;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q6 = find_q6_500(current);
		q5 = find_q5_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q5 && current->val <= q6)
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
void 	push_q5_500(t_stack **a)
{
    t_stack *current = NULL;
	int q4;
	int q5;
	
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q5 = find_q5_500(current);
		q4 = find_q4_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q4 && current->val <= q5)
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

void 	push_q4_500(t_stack **a)
{
    t_stack *current = NULL;
	int q4;
	int q3;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q4 = find_q4_500(current);
		q3 = find_q3_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q3 && current->val <= q4)
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

void 	push_q3_500(t_stack **a)
{
    t_stack *current = NULL;
	int q2;
	int q3;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q2 = find_q2_500(current);
		q3 = find_q3_500(current);
		while(i <= (size))
		{   current = *a;
			if(current->val >= q2 && current->val <= q3)
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

void 	push_q2_500(t_stack **a)
{
    t_stack *current = NULL;
	int q2;
	int q1;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q1 = find_q1_500(current);
		q2 = find_q2_500(current);
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

void 	push_q1_500(t_stack **a)
{
    t_stack *current = NULL;
	int q1;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q1 = find_q1_500(current);
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
				ft_putendl("ra");
			}
			i++;
		} 
}