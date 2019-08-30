/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:00:24 by atitus            #+#    #+#             */
/*   Updated: 2019/08/30 15:14:28 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	sort_3_b(t_stack *head)
{
	t_stack	*temp;
	
	temp = head;
	if(temp->val > temp->next->val && temp->val < temp->next->next->val){
		sb(&temp);
		ft_putendl("sb");
	}
	else if (temp->val > temp->next->val && temp->next->val > temp->next->next->val)
	{
		sb(&temp);
		rrb(&temp);
		ft_putendl("sb");
		ft_putendl("rrb");
	}
	else if (temp->val > temp->next->val && temp->next->val < temp->next->next->val)
	{
		rb(&temp, 1);
		ft_putendl("rb");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		sb(&temp);
		rb(&temp, 1);
		ft_putendl("sb");
		ft_putendl("rb");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		rrb(&temp);
		ft_putendl("rrb");
	}
}



void	sort_5_b(t_stack *head)
{
	int minimum;
	int count;

	b = head;
	minimum = 0;
	count = 0;
	minimum = min(b);
	while(count <= 1)
	{
		minimum = min(b);
		if(minimum == b->val)
		{
			pa(&a, &b, b->val);	
			ft_putendl("pa");
		}
		else if (minimum == b->next->val)
		{
			sb(&b);
			pa(&a, &b, b->val);
			ft_putendl("sb");
			ft_putendl("pa");
		}else if(minimum == b->next->next->val)
		{
			rb(&b, 1);
			sb(&b);
			pa(&a ,&b, b->val);
			ft_putendl("rb");
			ft_putendl("sb");
			ft_putendl("pa");
		}else if(minimum == b->next->next->next->val)
		{
			rrb(&b);
			rrb(&b);
			pa(&a, &b, b->val);
			ft_putendl("rrb");
			ft_putendl("rrb");
			ft_putendl("pa");
		}else if (minimum == b->next->next->next->next->val)
		{
			rrb(&b);
			pa(&a, &b, b->val);
			ft_putendl("rrb");
			ft_putendl("pa");
		}
	
		count++;
		}
	sort_3(b);
	pb(&b, &a, a->val);
	pb(&b, &a, a->val);
	ft_putendl("pb");
	ft_putendl("pb");
}

void	sort_4_b(t_stack *head)
{
	int minimum;
	
	b = head;
	minimum = 0;

	minimum = min(b);
	
	minimum = min(b);
	if(minimum == b->val)
	{
		pa(&a, &b, b->val);	
		ft_putendl("pa");
	}
	else if (minimum == b->next->val)
	{
		sb(&b);
		pa(&a, &b, b->val);
		ft_putendl("sb");
		ft_putendl("pa");
	}else if(minimum == b->next->next->val)
	{
		rrb(&b);
		rrb(&b);
		pa(&a ,&b, b->val);
		ft_putendl("rrb");
		ft_putendl("rrb");
		ft_putendl("pa");
	}else if(minimum == b->next->next->next->val)
	{
		rrb(&b);
		pa(&a, &b, b->val);
		ft_putendl("rrb");
		ft_putendl("pa");
	}
	sort_3(b);
	pb(&b, &a, a->val);
	ft_putendl("pb");
}