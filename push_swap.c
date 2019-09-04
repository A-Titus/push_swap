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
	sort_4(a);
	pa(&a, &b, b->val);
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

void 	push_median(t_stack **head)
{
    t_stack *current = NULL;
    int median;
	int q2;
    int size;
    int i;
	int middle_val;

	
		current = *head;
		size = list_size(current);
		i = 1;
		q2 = find_q2(current);
		median = find_median(current);
		middle_val = middle(*head);
		
		while(i <= (size))
		{   
			current = *head;
			if(current->val > q2 && current->val <= median)
			{
				pb(&b, &a, (a)->val);
				ft_putendl("pb");
			}

			else
			{
				ra(&a, 1);
				ft_putendl("ra");
			}
			
			i++;
		} 
}