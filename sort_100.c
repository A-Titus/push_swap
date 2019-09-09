/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:05:43 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:33:47 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sort_100(t_stack *a, t_stack *b)
{
	push_above_q4(&a, &b);
	push_sorted(&a, &b);
	push_q4(&a, &b);
	push_sorted(&a, &b);
	push_q3(&a, &b);
	push_sorted(&a, &b);
	push_median(&a, &b);
	push_sorted(&a, &b);
	push_q2(&a, &b);
	push_sorted(&a, &b);
	push_q1(&a, &b);
	push_sorted(&a, &b);
}
