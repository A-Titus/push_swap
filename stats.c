/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 13:16:45 by atitus            #+#    #+#             */
/*   Updated: 2019/09/06 09:34:17 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     find_median(t_stack *head)
{
    t_stack *temp;
    t_stack *ptr1;
    t_stack *ptr2;

    temp = clone(head);
    simple_sort(temp);
    ptr1 = temp;
    ptr2 = temp;
    if (temp != NULL)
    {
        while (ptr2 != NULL && ptr2->next != NULL)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val);
    delete_list(&temp);
}

int     find_q1(t_stack *head)
{
    t_stack *temp;
    int  mark;
    t_stack *ptr1;
    t_stack *ptr2;

    temp = clone(head);
    simple_sort(temp);
    mark = find_q2(temp);
    ptr1 = temp;
    ptr2 = temp;

    if (temp != NULL)
    {
        while (ptr2->val != mark  && ptr2->next->val != mark)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val);
    delete_list(&temp);
}

int     find_q2(t_stack *head)
{
    t_stack *temp;
    int   mark;
    t_stack *ptr1;
    t_stack *ptr2;

    temp = clone(head);
    simple_sort(temp);
    mark = find_median(temp);
    ptr1 = temp;
    ptr2 = temp;

    if (temp != NULL)
    {
        while (ptr2->val != mark  && ptr2->next->val != mark)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val);
    delete_list(&temp);
}

int     find_q3(t_stack *head)
{
    t_stack *temp;
    int   mark;
    int q3;
    t_stack *ptr1;
    t_stack *ptr2;

    temp = clone(head);
    simple_sort(temp);
    mark = find_median(temp);
    q3 = find_q4(temp);
    ptr1 = temp;
    ptr2 = temp;

    while(temp->val <= mark)
    {
        ptr1 = ptr1 ->next;
        ptr2 = ptr2->next;
        temp = temp->next;
    }

    temp = clone(head);
    if (temp != NULL)
    {
        while (ptr2->val != q3  && ptr2->next->val != q3)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
    }
    return (ptr1->val);
    delete_list(&temp);
}
int     find_q4(t_stack *head)
{
    t_stack *temp;
    int      mark;
    t_stack *ptr1;
    t_stack *ptr2;

    temp = clone(head);
    simple_sort(temp);
    mark = find_median(temp);
    ptr1 = temp;
    ptr2 = temp;
    while (temp->val <= mark)
    {
        ptr1 = ptr1 ->next;             
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
    delete_list(&temp);
}