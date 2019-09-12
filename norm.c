/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:20:35 by atitus            #+#    #+#             */
/*   Updated: 2019/09/12 10:02:56 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		delete_chucks(t_stack *temp, t_stack *hold)
{
	delete_list(&hold);
	delete_list(&temp);
}

void		init_chunk(int mark, t_stack *ptr1, t_stack *ptr2, t_stack *temp)
{
	mark = find_median(temp);
	ptr1 = temp;
	ptr2 = temp;
}