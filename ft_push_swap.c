/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:47:15 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 13:47:32 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*static int    lt(int a, int b)
{
    return  (a  < b);
}

void    simplify(t_stack **head, int  (*cmp)(int a, int b))
{
    t_stack *a;

    a = *head;
    while (a)
    {
        if ((a->val > a->next->val && a->next->val < a->next->next->val) 
                    && cmp(a->val, a->next->val ))
        {
           sa(&a);
        }
		a = a->next;
    }
}*/

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
			{
				
				sort_5(a);
			}
		}
		else 
		{
			if(is_sorted(a) != 1)
			{
				
				sort_500(a);
				
				
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
