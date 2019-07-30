/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:12:50 by atitus            #+#    #+#             */
/*   Updated: 2019/07/30 12:57:07 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	sort_3(t_stack **head)
{
	t_stack **temp;

	*temp = *head;
	if((*temp)->val > (*temp)->next->val && (*temp)->next->val < (*temp)->next->next->val){
		sa(temp);
		ft_putendl("sa");
	}
	else if ((*temp)->val > (*temp)->next->val && (*temp)->next->val > (*temp)->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if ((*temp)->val > (*temp)->next->val && (*temp)->next->val < (*temp)->next->next->val)
		ft_putendl("ra");
	else if ((*temp)->val < (*temp)->next->val && (*temp)->next->val > (*temp)->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if ((*temp)->val < (*temp)->next->val && (*temp)->next->val > (*temp)->next->next->val)
		ft_putendl("rra");
	print_list(*temp);
}

void	sort_5(t_stack **head)
{
	t_stack **temp;
	int minimum;

	*temp = *head;
	minimum = 0;
	minimum = min(*temp);

	if(minimum == (*temp)->val)
		ft_putendl("pb");
	else if (minimum == (*temp)->next->val)
	{
		ft_putendl("sa");
		ft_putendl("pb");
	}else if(minimum == (*temp)->next->next->val)
	{
		ft_putendl("ra");
		ft_putendl("sa");
		ft_putendl("pb");
	}else if(minimum == (*temp)->next->next->next->val)
	{
		ft_putendl("rra");
		ft_putendl("rra");
		ft_putendl("pb");
	}else
	{
		ft_putendl("rra");
		ft_putendl("pb");
	}
}//add the sort for 3.
//try and actually sort num.

