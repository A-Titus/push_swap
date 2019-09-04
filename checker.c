/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:02 by atitus            #+#    #+#             */
/*   Updated: 2019/09/04 16:09:03 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	init(t_stack *a, t_stack *b, int *flags)
{
	ft_putendl("stack_a");
	print(a, b, flags[1]);
}

void	checker(t_stack *a, int *flags)
{
	t_stack	*b;
	char	*inst;

	b = NULL;
	if (flags)
		init(a, b, flags);
	while (get_next_line(STDIN_FILENO, &inst) == 1)
	{
		if (check_inst(inst))
		{
			apply_inst((t_stack **[]){&a, &b}, inst, flags, 0);
			free(inst);
			if (flags[0])
				print(a, b, flags[1]);
		}
		else
			error();
	}
	if (check_win(a, b))
		win();
	else
		ko();
	destroy(&a);
	destroy(&b);
}

int		main(int ac, char **av)
{
	return (process_cmd(ac, av, &checker));
}
