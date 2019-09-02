/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:16:45 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 13:44:51 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_q1_100(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.46;
    
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

int     find_q2_100(t_stack *head)
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


int     find_q3_100(t_stack *head)
{
    t_stack *temp = clone(head);
    simple_sort(temp);
    int i = 0;
    int length;
    length = list_size(a);
    length = length * 0.85;
    
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

int     find_q4_100(t_stack *head)
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

int     find_q5_100(t_stack *head)
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

int     find_q6_100(t_stack *head)
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

int     find_q7_100(t_stack *head)
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
int     find_q8_100(t_stack *head)
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
int     find_q9_100(t_stack *head)
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

//////////////////////////////////////////////




