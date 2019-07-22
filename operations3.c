/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 08:47:44 by atitus            #+#    #+#             */
/*   Updated: 2019/07/22 08:45:24 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_stack  **head_ref) 
{   
    if (*head_ref == NULL || (*head_ref)->next == NULL) 
        return; 
    t_stack *secLast = NULL; 
    t_stack *last = *head_ref; 
  
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL; 
    last->next = *head_ref; 
    *head_ref = last; 
}

void rrb(t_stack  **head_ref) 
{   
    if (*head_ref == NULL || (*head_ref)->next == NULL) 
        return; 
    t_stack *secLast = NULL; 
    t_stack *last = *head_ref; 
  
    while (last->next != NULL) 
    { 
        secLast = last; 
        last = last->next; 
    } 
    secLast->next = NULL; 
    last->next = *head_ref; 
    *head_ref = last; 
}

void rrr(t_stack **a_ref, t_stack **b_ref)
{
	rra(a_ref);
	rrb(b_ref);
}
