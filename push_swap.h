/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/07/31 09:45:36 by atitus           ###   ########.fr       */
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

t_stack *a;
t_stack *b;


t_stack *add_node(int argc, char **argv);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	print_list(t_stack *head);
void 	pa(t_stack **a, t_stack **b, int val);
void	pb(t_stack **b, t_stack **a, int val);
void	deleteNode(t_stack *node);
void	deleteList(t_stack **headRef);
t_stack	*get_tail(t_stack *stack);
void	ra(t_stack **head_ref, int k);
void	rb(t_stack **head_ref, int k);
void	rr(t_stack **a_ref, t_stack **b_ref, int i);
void	rra(t_stack **head_ref);
void	rrb(t_stack **head_ref);
void	rrr(t_stack **a_ref, t_stack **b_ref);
void	simple_sort(t_stack *stack);
void	sort_3(t_stack *head);
void	sort_5(t_stack *head);
int		max(t_stack *head);
int		min(t_stack *head);
int		list_size(t_stack *head);
int	is_sorted(t_stack *head);
void	sort_100(t_stack **head);


#endif




