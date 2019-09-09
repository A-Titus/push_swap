/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:05:43 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 13:11:40 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sort_100(void)
{
	push_above_q4(&a);
	push_sorted(&b);
	push_q4(&a);
	push_sorted(&b);
	push_q3(&a);
	push_sorted(&b);
	push_median(&a);
	push_sorted(&b);
	push_q2(&a);
	push_sorted(&b);
	push_q1(&a);
	push_sorted(&b);
}
