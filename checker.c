/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:02 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 12:01:21 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	checker(int argc, char **argv)
{
	t_stack	*b;
	char	*inst;
	
	a = add_node(argc, argv);
	b = NULL;
	while (get_next_line(STDIN_FILENO, &inst) == 1)
	{
		if (check_inst(inst))
		{
			apply_inst(a, inst);
			free(inst);
		}
		else
			{
				ft_putendl("Error");
				exit(1);
			}
	}
	if (!is_sorted(a))
		{
			ft_putendl("KO");
			exit(1);
		}
	else if (is_sorted(a) && b == NULL)
		ft_putendl("OK");
		exit(1);
	deleteList(&a);
	deleteList(&b);
}

int		main(int argc, char **argv)
{
	
	if (argc > 1)
	{
		if (argc == 2 && !argv[2])
		{
			argv = ft_strsplit(argv[0], ' ');///////////////////
		}

		checker(argc, argv);
	}
	else
		return(0);
}