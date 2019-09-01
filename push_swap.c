/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:12:50 by atitus            #+#    #+#             */
/*   Updated: 2019/08/30 14:44:33 by emanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	sort_3(t_stack *head)
{
	t_stack	*temp;
	
	temp = head;
	if(temp->val > temp->next->val && temp->val < temp->next->next->val){
		sa(&temp);
		ft_putendl("sa");
	}
	else if (temp->val > temp->next->val && temp->next->val > temp->next->next->val)
	{
		sa(&temp);
		rra(&temp);
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if (temp->val > temp->next->val && temp->next->val < temp->next->next->val)
	{
		ra(&temp, 1);
		ft_putendl("ra");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		sa(&temp);
		ra(&temp, 1);
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		rra(&temp);
		ft_putendl("rra");
	}
}



void	sort_5(t_stack *head)
{
	int minimum;
	int count;

	a = head;
	minimum = 0;
	count = 0;
	minimum = min(a);
	while(count <= 1)
	{
		minimum = min(a);
		if(minimum == a->val)
		{
			pb(&b, &a, a->val);	
			ft_putendl("pb");
		}
		else if (minimum == a->next->val)
		{
			sa(&a);
			pb(&b, &a, a->val);
			ft_putendl("sa");
			ft_putendl("pb");
		}else if(minimum == a->next->next->val)
		{
			ra(&a, 1);
			sa(&a);
			pb(&b ,&a, a->val);
			ft_putendl("ra");
			ft_putendl("sa");
			ft_putendl("pb");
		}else if(minimum == a->next->next->next->val)
		{
			rra(&a);
			rra(&a);
			pb(&b, &a, a->val);
			ft_putendl("rra");
			ft_putendl("rra");
			ft_putendl("pb");
		}else if (minimum == a->next->next->next->next->val)
		{
			rra(&a);
			pb(&b, &a, a->val);
			ft_putendl("rra");
			ft_putendl("pb");
		}
	
		count++;
		}
	sort_3(a);
	pa(&a, &b, b->val);
	pa(&a, &b, b->val);
	ft_putendl("pa");
	ft_putendl("pa");
}

void	sort_4(t_stack *head)
{
	int minimum;
	
	a = head;
	minimum = 0;

	minimum = min(a);
	
	minimum = min(a);
	if(minimum == a->val)
	{
		pb(&b, &a, a->val);	
		ft_putendl("pb");
	}
	else if (minimum == a->next->val)
	{
		sa(&a);
		pb(&b, &a, a->val);
		ft_putendl("sa");
		ft_putendl("pb");
	}else if(minimum == a->next->next->val)
	{
		rra(&a);
		rra(&a);
		pb(&b ,&a, a->val);
		ft_putendl("rra");
		ft_putendl("rra");
		ft_putendl("pb");
	}else if(minimum == a->next->next->next->val)
	{
		rra(&a);
		pb(&b, &a, a->val);
		ft_putendl("rra");
		ft_putendl("pb");
	}
	sort_3(a);
	pa(&a, &b, b->val);
	ft_putendl("pa");


}

void 	push_q8(t_stack **a)
{
    t_stack *current = NULL;
	int q7;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q7 = find_q7(current);
		while(i <= (size))
		{   current = *a;
			if(current->val >= q7)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
			}
			i++;
		} 
}

void 	push_q7(t_stack **a)
{
    t_stack *current = NULL;
	int q7;
	int q6;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q6 = find_q6(current);
		q7 = find_q7(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q6 && current->val < q7)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
			}
			i++;
		} 
}

void 	push_q6(t_stack **a)
{
    t_stack *current = NULL;
	int q5;
	int q6;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q6 = find_q6(current);
		q5 = find_q5(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q5 && current->val <= q6)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
			}
			i++;
		} 
}
void 	push_q5(t_stack **a)
{
    t_stack *current = NULL;
	int q4;
	//int q5;
	
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		//q5 = find_q5(current);
		q4 = find_q4(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q4 )//&& current->val <= q5)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
			}
			i++;
		} 
}

void 	push_q4(t_stack **a)
{
    t_stack *current = NULL;
//	int q4;
	int q3;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		q3 = find_q3(current);
		//q4 = find_q4(current);
		while(i <= (size))
		{   current = *a;
			if(current->val > q3)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
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
		q2 = find_q2(current);
		q3 = find_q3(current);
		while(i <= (size))
		{   current = *a;
			if(current->val >= q2 && current->val <= q3)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
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
		q1 = find_q1(current);
		q2 = find_q2(current);
		while(i <= (size))
		{   current = *a;
			if(current->val >= q1 && current->val <= q2)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
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
		q1 = find_q1(current);
		while(i <= (size))
		{   current = *a;
			if(current->val <= q1)
			{
				pb(&b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
			{
				ra(a, 1);
				ft_putendl("ra");
			}
			i++;
		} 
}
