/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:20:14 by atitus            #+#    #+#             */
/*   Updated: 2019/08/27 09:03:41 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include  "libft/get_next_line/get_next_line.h"
#include "libft/libft.h"
#include "push_swap.h"

int			main(int argc, char **argv)
{
	t_stack *stack_a = add_node(argc, argv);
	t_stack *stack_b = NULL;

	char *line;
	
	line = NULL;

	while (get_next_line(0, &line) == 1)
	{
		apply_ins(stack_a, stack_b, line);
	}
	if (is_sorted(stack_a) == 0)
	{
		ft_putendl("OK");
	}
	else
	{
		ft_putendl("KO");
	}
	return (0);
}
