/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:12:50 by atitus            #+#    #+#             */
/*   Updated: 2019/08/19 15:57:22 by atitus           ###   ########.fr       */
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

void	sort_all(t_stack *head)
{	
	t_stack *temp =head;
//	int i = 0;
//	int mediansize;
	int med = find_median(head);   //correct val.
//	int medlen = medianlength(head);
	//printf("%d\n", med );
//	int q1 = find_q1(head);
//	int q3 = find_q3(head);
	///////////////////////////////////////////////
	//fix loop
//	ft_putendl("---------LIST A--------");
//	print_list(a);
//	ft_putendl("---------LIST B--------");
//	print_list(b);
	ft_putendl("---------Instructions--------");
	while(temp->val) //fix this loop
	{
		//temp = head;
		if(temp->val <= med)
		{
			temp = temp->next;
			pb(&b, &a, a->val);
			ft_putendl("pb");
		}
		else
		{
			temp = temp->next;
			rra(&a);
			ft_putendl("rra");
		}
	}
	ft_putendl("---------LIST A--------");
	print_list(a);
	ft_putendl("---------LIST B--------");
	print_list(b);
}

/*push everything below the median to stack b.
then everything below third qaurtile
then everything above trird qaurtile.
try to push min
*/