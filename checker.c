/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:09:02 by atitus            #+#    #+#             */
/*   Updated: 2019/09/05 10:09:02 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	checker(int argc, char **argv)
{
	t_stack	*b;
	char	*inst;
	
	// int *num = NULL;
	// int i = 1;
	// int j = 0;
	// while (argv[i])
	// {
	// 	num[j++] = ft_atoi(argv[i]);
	// 	i++;
	// }

	// if(!valid(argc,&num))
	// {
	// 	ft_putendl("Error");
	// 	exit(1);
	// }
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
	else if (is_sorted(a))
		ft_putendl("OK");
		exit(1);
	deleteList(&a);
	deleteList(&b);
}

int		main(int argc, char **argv)
{
	
	checker(argc, argv);
}
