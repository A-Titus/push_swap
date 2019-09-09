/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_func3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:25:29 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 11:51:39 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_ra_median(t_stack *temp)
{
	a = temp;
	ra(&a, 1);
	ft_putendl("ra");
}

void	sort_2(t_stack *a)
{
	if (!is_sorted(a))
		call_sa(a);
}

void	call_sort_3(t_stack *a)
{
	if (!is_sorted(a))
		sort_3(a);
}

void	call_sort_4(t_stack *a)
{
	if (!is_sorted(a))
		sort_4(a);
}

void	call_sort_5(t_stack *a)
{
	if (!is_sorted(a))
		sort_5(a);
}
