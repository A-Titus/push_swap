/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:49:59 by atitus            #+#    #+#             */
/*   Updated: 2019/09/11 12:16:00 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int		counter;
	char	**str;

	
	str = NULL;
	if (argc == 2)
	{
		str = ft_strsplit(argv[1], ' ');
		counter = word_count(str);
		if (counter == 1)
		{
			exit(1);
		}
		if(!valid(counter, str))
			error();
		checker_a(counter, str);
	}
	if (argc > 1)
	{
		checker(argc, argv);
	}
	else
		return (0);
}
