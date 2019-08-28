/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:24:33 by atitus            #+#    #+#             */
/*   Updated: 2019/08/28 15:47:59 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_5_rev(t_stack *head)
{
    int max_val = max(head);

    int count = 0;
    while(count <= 5)
    {
        max_val = max(a);
        if(max_val == head->val)
        {
            pa(&a, &b, b->val);
            ft_putendl("pa");
        }else if(max_val == head->next->val)
        {
            sb(&b);
            pa(&a, &b, b->val);
            ft_putendl("sb");
            ft_putendl("pa");
        }else if(max_val == head->next->next->val)
        {
             pa(&a, &b, b->val);
             sb(&b);
             pb(&b, &a, a->val);
             sb(&b);
             pa(&a, &b, b->val); 
            ft_putendl("pa");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pa");
        }else if(max_val == head->next->next->next->val)
        {
            pa(&a, &b, b->val);
            pa(&a, &b, b->val);
            sb(&b);
            pb(&b, &a, a->val);
            sb(&b);
            pb(&b, &a, a->val);
            sb(&b);
            pa(&a, &b, b->val); 
            ft_putendl("pa");
            ft_putendl("pa");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pa");
        }
        else if (max_val == head->next->next->next->next->val)
        {
            pa(&a, &b, b->val);
            pa(&a, &b, b->val);
            pa(&a, &b, b->val);
            sb(&b);
            pb(&b, &a, a->val);
            sb(&b);
            pb(&b, &a, a->val);
            sb(&b);
            pb(&b, &a, a->val);
            sb(&b);
            pa(&a, &b, b->val);
            
            ft_putendl("pa");
            ft_putendl("pa");
            ft_putendl("pa");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pb");
            ft_putendl("sb");
            ft_putendl("pa");
        }
        count++;
    }
}