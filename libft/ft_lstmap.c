/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 09:25:19 by atitus            #+#    #+#             */
/*   Updated: 2019/07/11 09:25:26 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *node;

	if (!(lst))
		return (NULL);
	start = f(lst);
	node = start;
	lst = lst->next;
	while (lst)
	{
		node->next = f(lst);
		node = node->next;
		lst = lst->next;
	}
	return (start);
}
