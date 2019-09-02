/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:36:50 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 15:46:58 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     middle(t_stack *head)  
{  
    t_stack *slow_ptr = head;  
    t_stack *fast_ptr = head;  
    int i = 0;
  
    if (head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;
            i++;  
        }  
       
    }  
    return(i);
}

void    push_sorted(t_stack **b)
{
    
    int size;
    int i;
    int middle_val = middle(*b);
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
		else (current->val != max_val) //&& i <= middle_val)
		{
			
            rb(b, 1);
			ft_putendl("rb");
		}
       /* else if (current->val != max_val && i > middle_val)
        {
            rrb(b);
            ft_putendl("rrb");
        }*/
        i++;
    }

    
}  
