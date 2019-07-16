/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:53:31 by atitus            #+#    #+#             */
/*   Updated: 2019/07/16 12:02:25 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *a)
{
    t_stack *head;
    t_stack *tail;

    if (a && a->next)
    {
        head = a->next;
        tail = get_tail(a);
        tail->next = a;
        a->next = NULL;
        a = head;
    }
}
