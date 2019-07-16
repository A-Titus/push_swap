/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/07/16 12:01:34 by atitus           ###   ########.fr       */
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
void 	pa(t_stack **a, t_stack **b, int val);
void	pb(t_stack **b, t_stack **a, int val);
void	deleteNode(t_stack *node);
void	deleteList(t_stack **headRef);
t_stack	*get_tail(t_stack *stack);
void	rotate(t_stack **head_ref, int k);
void	ra(t_stack *a);

#endif




