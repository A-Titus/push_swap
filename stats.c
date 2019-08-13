/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:16:45 by atitus            #+#    #+#             */
/*   Updated: 2019/08/13 14:54:23 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_median(t_stack *head)
{ 
    t_stack *temp = clone(head);
    simple_sort(temp);                
    t_stack *ptr1 = temp;
    t_stack *ptr2 = temp;
 
    if (temp!=NULL)
    {
        while (ptr2 != NULL && ptr2->next != NULL)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val);
    deleteList(&temp);
}

int     find_q1(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int   mark = find_median(temp);
    t_stack *ptr1 = temp;
    t_stack *ptr2 = temp;
 
    if (temp != NULL)
    {
        while (ptr2->val != mark  && ptr2->next->val != mark)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val); 
    deleteList(&temp);  
}

int     find_q3(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int   mark = find_median(temp);
    t_stack *ptr1 = temp;
    t_stack *ptr2 = temp;
    
    while(temp->val <= mark)
    {
        ptr1 = ptr1 ->next;             //increment ptr1 and 2 so that they can start from the median.
        ptr2 = ptr2->next;
        temp = temp->next;
    }
 
    temp = clone(head);
    if (temp != NULL)
    {
        while (ptr2 != NULL  && ptr2->next != NULL)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val); 
    deleteList(&temp);  
}

int     medianlength(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);

     int i = 0;
     int   mark = find_median(temp);
     while(temp->val <= mark)
     {
         i++;
     }
     return(i);
}