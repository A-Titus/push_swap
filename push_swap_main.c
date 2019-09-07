/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:45:42 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 09:53:45 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int count;
		char **strings = ft_strsplit(argv[1], ' ');
		count = word_count(strings);
		if (count == 1)
		{
			exit(1);
		}
		push_swapA(count, strings);
	}
	if (argc > 1)
	{
		push_swap(argc, argv);
	}
	 else
		return (0);
}