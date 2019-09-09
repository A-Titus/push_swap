/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:02 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 16:24:43 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		checker(int argc, char **argv)
{
	t_stack *a;
	t_stack	*b;
	char	*inst;

	a = add_node(argc, argv);
	b = NULL;
	while (get_next_line(STDIN_FILENO, &inst) == 1)
	{
		if (check_inst(inst))
		{
			apply_inst(a, b, inst);
			free(inst);
		}
		else
			error();
	}
	if (is_sorted(a) && b == NULL)
		ft_putendl("OK");
	else if (!is_sorted(a))
		print_ko();
	delete_list(&a);
	delete_list(&b);
}

void		checker_a(int argc, char **argv)
{
	t_stack	*b;
	t_stack *a;
	char	*inst;

	a = add_node_a(argc, argv);
	b = NULL;
	while (get_next_line(STDIN_FILENO, &inst) == 1)
	{
		if (check_inst(inst))
		{
			apply_inst(a, b, inst);
			free(inst);
		}
		else
			error();
	}
	if (is_sorted(a) && b == NULL)
		print_ok();
	else if (!is_sorted(a))
		print_ko();
	delete_list(&a);
	delete_list(&b);
}

int			word_count(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
