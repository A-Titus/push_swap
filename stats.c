/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:16:45 by atitus            #+#    #+#             */
/*   Updated: 2019/09/01 13:50:43 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_q1(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.3;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp);
    
}

int     find_q2(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.6;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}


int     find_q3(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.9;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}

int     find_q4(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.8;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}

int     find_q5(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.5;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}

int     find_q6(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.6;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}

int     find_q7(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.7;
    
    t_stack *ptr1 = temp;
    if(temp)
    {
        while(i <= length)
        {
            ptr1 = ptr1->next;
            i++;
        }
    }
    return (ptr1->val); 
    deleteList(&temp); 
}


