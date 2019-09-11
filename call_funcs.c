/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:37:46 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 11:01:00 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	call_sa(t_stack *temp)
{
	//sa(&temp);
	temp = NULL;
	ft_putendl("sa");
}

void	call_sa_rra(t_stack *temp)
{
	temp = NULL;
	//sa(&temp);
	ft_putendl("sa");
//	rra(&temp);
	ft_putendl("rra");
}

void	call_ra(t_stack *temp)
{
	temp = NULL;
	//ra(&temp, 1);
	ft_putendl("ra");
}

void	call_sa_ra(t_stack *temp)
{
	temp = NULL;
	//sa(&temp);
	//ra(&temp, 1);
	ft_putendl("sa");
	ft_putendl("ra");
}

void	call_rra(t_stack *temp)
{
	temp = NULL;
	//rra(&temp);
	ft_putendl("rra");
}
