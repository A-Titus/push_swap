/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <atitus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:53:29 by atitus            #+#    #+#             */
/*   Updated: 2019/09/07 14:07:43 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
    ft_putendl_fd("Error", STDERR_FILENO);
    exit(1);
}

void    print_ko(void)
{
    ft_putendl("KO");
    exit(1);
}

void    print_ok(void)
{
    ft_putendl("OK");
    exit(1);
}