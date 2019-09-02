/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats_500.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 09:54:29 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 13:49:29 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_q1_500(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.2;
    
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

int     find_q2_500(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.4;
    
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


int     find_q3_500(t_stack *head)
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

int     find_q4_500(t_stack *head)
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

int     find_q5_500(t_stack *head)
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

int     find_q6_500(t_stack *head)
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

int     find_q7_500(t_stack *head)
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

int     find_q8_500(t_stack *head)
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

int     find_q9_500(t_stack *head)
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