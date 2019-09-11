/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:37:46 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 12:44:18 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sa(t_stack *temp)
{
	sa(&temp);
	ft_putendl("sa");
}

void	call_sa_rra(t_stack *temp)
{
	sa(&temp);
	ft_putendl("sa");
	rra(&temp);
	ft_putendl("rra");
}

void	call_ra(t_stack *temp)
{
	ra(&temp, 1);
	ft_putendl("ra");
}

void	call_sa_ra(t_stack *temp)
{
	sa(&temp);
	ra(&temp, 1);
	ft_putendl("sa");
	ft_putendl("ra");
}

void	call_rra(t_stack *temp)
{
	rra(&temp);
	ft_putendl("rra");
}
