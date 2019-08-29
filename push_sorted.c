/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:36:50 by atitus            #+#    #+#             */
/*   Updated: 2019/08/29 12:22:31 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_sorted(t_stack **b)
{
    int size;
    int i;
    t_stack *current = NULL;
    
    size = list_size(*b);
    i = 1;
    
    while(i > -1)
    {
        size = list_size(*b);
        current = *b;
        int max_val = max(*b);
        
        if(size == 0)
        {
            i = -1;
            break ;
        }
        if(current->val == max_val)
			{
				pa(&a, b, (*b)->val);
				ft_putendl("pa");
			}
			else
			{
				rb(b, 1);
				ft_putendl("rb");
			}
            i++;
    }
}