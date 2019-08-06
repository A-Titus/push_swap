/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:59:18 by atitus            #+#    #+#             */
/*   Updated: 2019/08/06 14:39:11 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    simple_sort(t_stack *head)
{

   t_stack *temp = head;
   t_stack *sort_node = NULL;
   t_stack *help = NULL;
   int sort_value;
   while(temp)
   {
     sort_node=temp;
     help=temp->next;
     while(help)
     {
       if(help->val<sort_node->val)
       {
         sort_node=help;
       }
         help=help->next;
     }
      if(sort_node!=temp)
      {    
        sort_value=sort_node->val;
        sort_node->val=temp->val;
        temp->val=sort_value;
      }
      
      temp=temp->next;
    }
}
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
}

t_stack   *clone(t_stack* list) 
{
    if (list == NULL) return NULL;

    t_stack* result = (t_stack*)malloc(sizeof(t_stack));
    result->val = list->val;
    result->next = clone(list->next);
    return result;
}