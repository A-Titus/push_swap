/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 11:17:31 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# define MAX_INT 2147483647
# define MIN_INT -2147483648
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
void	sort_all(t_stack **headRef);
void split_nodes(t_stack* source, t_stack** front_ref, t_stack** back_ref);
t_stack* sorted_merge(t_stack* a, t_stack* b);
int     middle(t_stack *head);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	print_list(t_stack *head);
void 	pa(t_stack **a, t_stack **b, int val);
void	pb(t_stack **b, t_stack **a, int val);
void	deleteNode(t_stack *node);
void	deleteList(t_stack **headRef);
void	ra(t_stack **head_ref, int k);
void	rb(t_stack **head_ref, int k);
void	rr(t_stack **a_ref, t_stack **b_ref, int i);
void	rra(t_stack **head_ref);
void	rrb(t_stack **head_ref);
void	rrr(t_stack **a_ref, t_stack **b_ref);
void	simple_sort(t_stack *stack);
void	sort_3(t_stack *head);
void	sort_4(t_stack *head);
void	sort_5(t_stack *head);
void	sort_3_b(t_stack *head);
void	sort_4_b(t_stack *head);
void	sort_5_b(t_stack *head);
int		max(t_stack *head);
int		min(t_stack *head);
int		list_size(t_stack *head);
int		is_sorted(t_stack *head);
void 	push_below_median(t_stack **a);
void 	push_above_median(t_stack **a);
void    push_sorted(t_stack **b);
void    simple_sort(t_stack *head);
int     find_median(t_stack *head);
int     find_q1(t_stack *head);
int     find_q3(t_stack *head);
int     medianlength(t_stack *head);
int	apply_inst(t_stack *stack_a, char *instr);
void    sort_5_rev(t_stack *head);
void	ft_swap(int *a, int *b);



void 	push_above_q4(t_stack **head);
void 	push_q2(t_stack **head);
void 	push_q3(t_stack **head);
void 	push_q4(t_stack **head);
void 	push_median(t_stack **head);
void 	push_q1(t_stack **head);
int     find_q4(t_stack *head);
int     find_dist(t_stack *head);
int     find_q2(t_stack *head);


int	check_inst(char *s);
int	check_duplicates(t_stack *s, int n);
int	check_integer(char *s);
int	check_spaces(char *s);
void	ko(void);
void	error(void);
int		check_win(t_stack *a, t_stack *b);
int		check_sorted(t_stack *s, int (*cmp)(int, int));
int		valid(int argc, char **argv);


#endif
