/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:47:15 by atitus            #+#    #+#             */
/*   Updated: 2019/09/01 13:50:57 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	int length;
	if (argc >= 3)
	{
		a =  add_node(argc, argv);
		length = list_size(a);
		
		if(length == 2)
		{
			if(is_sorted(a) != 1)
				ft_putendl("sa");
		}else if (length == 3)
		{
			if(is_sorted(a) != 1)
				sort_3(a);
		}
		else if (length == 4)
		{
			if(is_sorted(a) != 1)
				sort_4(a);
		}else if (length == 5)
		{
			if(is_sorted(a) != 1)
				sort_5(a);
		}
		else 
		{
			if(is_sorted(a) != 1)
			{
				/*push_q8(&a);
				push_sorted(&b);
				
				push_q7(&a);
				push_sorted(&b);
				push_q6(&a);
				push_sorted(&b);
				
				push_q5(&a);
				push_sorted(&b);
				*/
				push_q4(&a);
				push_sorted(&b);
				push_q3(&a);
				push_sorted(&b);
				push_q2(&a);
				push_sorted(&b);
				push_q1(&a);
				push_sorted(&b);
				
				
				/*ft_putendl("------");
				print_list(a);
				ft_putendl("------");
				print_list(b);
				ft_putendl("------");
				*/
			}
			  
		}
	}
}


int		main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
