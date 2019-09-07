/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 09:49:59 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 13:38:51 by atitus           ###   ########.fr       */
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
		checker_a(counter, str);
	}
	if (argc > 1)
	{
		checker(argc, argv);
	}
	else
		return (0);
}
