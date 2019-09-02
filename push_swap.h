/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/09/02 11:13:43 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct 		s_stack
{
	int			 	val;
	struct s_stack *next;
}					t_stack;

t_stack *a;
t_stack *b;

t_stack *add_node(int argc, char **argv);
t_stack	*get_tail(t_stack *stack);
t_stack *clone(t_stack* list);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **head_ref, int k);
void	rb(t_stack **head_ref, int k);
void	rr(t_stack **a_ref, t_stack **b_ref, int i);
void	rra(t_stack **head_ref);
void	rrb(t_stack **head_ref);
void	rrr(t_stack **a_ref, t_stack **b_ref);
void 	pa(t_stack **a, t_stack **b, int val);
void	pb(t_stack **b, t_stack **a, int val);

void	print_list(t_stack *head);

void	deleteNode(t_stack *node);
void	deleteList(t_stack **headRef);


void	simple_sort(t_stack *stack);
void	sort_3(t_stack *head);
void	sort_4(t_stack *head);
void	sort_5(t_stack *head);
void	sort_3_b(t_stack *head);
void	sort_4_b(t_stack *head);
void	sort_5_b(t_stack *head);
void	sort_100(t_stack *head);
void    sort_500(t_stack * head);

int		max(t_stack *head);
int		min(t_stack *head);
int		list_size(t_stack *head);
int		is_sorted(t_stack *head);

void 	push_q3(t_stack **a);
void 	push_q1(t_stack **a);
void 	push_q2(t_stack **a);
void 	push_q4(t_stack **a);

void 	push_q1_500(t_stack **a);
void 	push_q2_500(t_stack **a);
void 	push_q3_500(t_stack **a);
void 	push_q4_500(t_stack **a);
void 	push_q5_500(t_stack **a);
void 	push_q6_500(t_stack **a);
void 	push_q7_500(t_stack **a);
void 	push_q8_500(t_stack **a);
void 	push_q9_500(t_stack **a);
void 	push_q10_500(t_stack **a);

void    push_sorted(t_stack **b);
void    simple_sort(t_stack *head);

int     find_q1_100(t_stack *head);
int     find_q2_100(t_stack *head);
int     find_q3_100(t_stack *head);
int     find_q4_100(t_stack *head);


int     find_q1_500(t_stack *head);
int     find_q2_500(t_stack *head);
int     find_q3_500(t_stack *head);
int     find_q4_500(t_stack *head);
int     find_q5_500(t_stack *head);
int     find_q6_500(t_stack *head);
int     find_q7_500(t_stack *head);
int     find_q8_500(t_stack *head);
int     find_q9_500(t_stack *head);

void	apply_ins(t_stack *stack_a, t_stack *stack_b, char *line);
void	print_stats(t_stack *a); //

#endif
