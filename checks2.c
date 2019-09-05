/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:26 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 07:57:21 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

int		check_sorted(t_stack *s, int (*cmp)(int, int))
{
	if (!s)
		return (1);
	while (s->next)
	{
		if ((*cmp)(s->val, s->next->val) == 0)
			break ;
		s = s->next;
	}
	return (!s->next);
}


int		check_win(t_stack *a, t_stack *b)
{
	return (is_sorted(a) == 1 && b == NULL);
}
