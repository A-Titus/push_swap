/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 11:36:50 by atitus            #+#    #+#             */
/*   Updated: 2019/09/06 08:44:02 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     middle(t_stack *head)
{
    t_stack *slow_ptr;
    t_stack *fast_ptr;
    int i;

    slow_ptr = head;
    fast_ptr = head;
    i = 0;

    if (head != NULL)
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

int     find_dist(t_stack *head)
{
        int i = 0;
        int j = 0;
        t_stack *temp;

        temp = head;
        while (temp->val != max(temp))
        {
            temp = temp->next;
            i++;
        }
        while (temp)
        {
            temp = temp->next;
            j++;
        }

        if (i < j)
            return(1);  
        else
            return (-1);
}

void    push_sorted(t_stack **b)
{
    int size;
    int i;
    int middle_val;
    t_stack *current;
    
    current = NULL;
    middle_val = middle(*b);
    size = list_size(*b);
    i = 1;

    while (i > -1)
    {
        size = list_size(*b);
        current = *b;
        int max_val = max(*b);

        if (size == 0)
        {
            i = -1;
            break ;
        }
        if (current->val == max_val)
		{
			pa(&a, b, (*b)->val);
			ft_putendl("pa");
		}
        else if (find_dist(*b) == 1)
        {
            rb(b,1);
			ft_putendl("rb");
        }
        else
        {
            rrb(b);
			ft_putendl("rrb");
        }
        i++;
    }
}