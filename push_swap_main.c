/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:45:42 by atitus            #+#    #+#             */
/*   Updated: 2019/09/09 10:26:35 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int		count;
	char	**strings;

	if (argc == 2)
	{
		strings = ft_strsplit(argv[1], ' ');
		count = word_count(strings);
		if (count == 1)
		{
			exit(1);
		}
		push_swap_a(count, strings);
	}
	if (argc > 1)
	{
		push_swap(argc, argv);
	}
	else
	{
		delete_list(&a);
		delete_list(&b);
		return (0);
	}
}
