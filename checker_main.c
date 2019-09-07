/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:49:59 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 09:50:40 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	if (argc == 2) 
	{
		int counter;
		char **str = ft_strsplit(argv[1], ' ');
		counter = word_count(str);
		if (counter == 1)
		{
			exit(1);
		}
		//print_list(a);
		checkerA(counter, str);
	}
	if (argc > 1)
	{
		checker(argc, argv);
	}
	
	 else
		return (0);
}
