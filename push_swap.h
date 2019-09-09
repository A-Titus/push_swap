/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 14:14:24 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 	2147483647
# define MIN_INT 	-2147483648
# include "libft/libft.h"

# include <stdio.h>
# include <stdlib.h>

typedef struct		s_stack
{
	int				val;
	struct s_stack	*next;
}					t_stack;
t_stack *a;
t_stack *b;

struct				s_median
{
	t_stack			*current;
	int				median;
	int				q2;
	int				size;
	int				i;
	int				middle_val;
};

struct				s_chunks
{
	t_stack			*temp;
	t_stack			*ptr1;
	t_stack			*ptr2;
	int				mark;
	int				q3;
};

struct				s_push
{
	t_stack			*current;
	int				q1;
	int				q2;
	int				q4;
	int				q3;
	int				size;
	int				i;
	int				median;
};

struct				s_ps
{
	int				size;
	int				i;
	int				middle_val;
	int				max_val;
	t_stack			*current;
};

struct				s_add
{
	t_stack			*head;
	t_stack			*temp;
	t_stack			*new;
	int				i;
};

struct				s_sort
{
	t_stack			*temp;
	t_stack			*sort_node;
	t_stack			*help;
	int				sort_value;
};

t_stack				*add_node(int argc, char **argv);
t_stack				*clone(t_stack *list);
int					middle(t_stack *head);
t_stack				*add_node_a(int argc, char **argv);
void				checker(int argc, char **argv);
void				call_ra_median(t_stack *temp);
void				call_sa(t_stack *temp);
void				call_sa_rra(t_stack *temp);
void				call_ra(t_stack *temp);
void				call_sa_ra(t_stack *temp);
void				call_rra(t_stack *temp);
void				call_pb(t_stack *head);
void				call_sa_pb(t_stack *head);
void				callra_sa_pb(t_stack *head);
void				call_rra2_pb(t_stack *head);
void				call_rra_pb(t_stack *head);
void				sort_2(t_stack *a);
void				call_sort_3(t_stack *a);
void				call_sort_4(t_stack *a);
void				call_sort_5(t_stack *a);
void				sort_100(t_stack *a, t_stack *b);
void				error(void);
void				print_ok(void);
void				print_ko(void);
void				checker_a(int argc, char **argv);
void				push_swap(int argc, char **argv);
void				push_swap_a(int argc, char **argv);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				print_list(t_stack *head);
void				pa(t_stack **a, t_stack **b, int val);
void				pb(t_stack **b, t_stack **a, int val);
void				delete_node(t_stack *node);
void				delete_list(t_stack **head_ref);
void				ra(t_stack **head_ref, int k);
void				rb(t_stack **head_ref, int k);
void				rr(t_stack **a_ref, t_stack **b_ref, int i);
void				rra(t_stack **head_ref);
void				rrb(t_stack **head_ref);
void				rrr(t_stack **a_ref, t_stack **b_ref);
void				simple_sort(t_stack *stack);
void				sort_3(t_stack *head);
void				sort_4(t_stack *head);
void				sort_5(t_stack *head);
void				call_sort_100(void);
int					max(t_stack *head);
int					min(t_stack *head);
int					list_size(t_stack *head);
int					is_sorted(t_stack *head);
void				push_sorted(t_stack **b);
void				simple_sort(t_stack *head);
int					find_median(t_stack *head);
int					find_q1(t_stack *head);
int					find_q3(t_stack *head);
int					medianlength(t_stack *head);
int					apply_inst(t_stack *stack_a, char *instr);

void				call_pa_b(t_stack **b);
void				call_rb(t_stack **b);
void				call_rrb(t_stack **b);

void				push_above_q4(t_stack **head);
void				push_q2(t_stack **head);
void				push_q3(t_stack **head);
void				push_q4(t_stack **head);
void				push_median(t_stack **head);
void				push_q1(t_stack **head);
int					find_q4(t_stack *head);
int					find_dist(t_stack *head);
int					find_q2(t_stack *head);

int					check_inst(char *s);
int					check_duplicates(t_stack *s, int n);
int					check_integer(char *s);
int					check_spaces(char *s);
int					valid(int argc, char **argv);
int					word_count(char **str);
int					check_dup(int argc, char **argv);
int					is_num(char *str);
int					check_size(long n);
long long			ft_atoll(char *str);

#endif
