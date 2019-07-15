/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/07/15 15:08:49 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int 	val;
	struct s_stack *next;
}t_stack;

t_stack *add_node(int argc, char **argv);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	print_list(t_stack *node);
void 	pa(t_stack **a, int val);
void	pb(t_stack **b, int val);

#endif




