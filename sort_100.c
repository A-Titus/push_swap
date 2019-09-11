/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:05:43 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 13:26:11 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sort_100(void)
{
	push_above_q4(&g_a);
	push_sorted(&g_b);
	push_q4(&g_a);
	push_sorted(&g_b);
	push_q3(&g_a);
	push_sorted(&g_b);
	push_median(&g_a);
	push_sorted(&g_b);
	push_q2(&g_a);
	push_sorted(&g_b);
	push_q1(&g_a);
	push_sorted(&g_b);
}
