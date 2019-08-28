/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:12:50 by atitus            #+#    #+#             */
/*   Updated: 2019/08/28 15:41:07 by atitus           ###   ########.fr       */
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

void        sort_all(t_stack **a, t_stack **b)
{
    t_stack *current = NULL;
    int median;
    int size;
    int i;
	
		current = *a;
		size = list_size(current);
		i = 1;
		median = find_median(current);
		
		while(i <= (size))
		{   current = *a;
			if(current->val < median)
			{
				pb(b, a, (*a)->val);
				ft_putendl("pb");
			}
			else
				ra(a, 1);
				ft_putendl("ra");
			i++;
		}
		//pushes everything below the median to stack b
	/*----------------------------------*/

	//sort_5_rev(*b);
	
}
