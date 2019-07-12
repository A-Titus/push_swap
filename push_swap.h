/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:02:56 by atitus            #+#    #+#             */
/*   Updated: 2019/07/12 11:49:20 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stacka
{
	int val_a;
	struct s_stacka *next;
}t_stacka;


typedef struct s_stackb
{
	int val_b;
	struct s_stackb *next;
}t_stackb;

t_stacka *add_node(int argc, char **argv);
void	sa(t_stacka *node);
void	print_list(t_stacka *node);

#endif




