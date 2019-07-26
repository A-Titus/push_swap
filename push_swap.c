/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:12:50 by atitus            #+#    #+#             */
/*   Updated: 2019/07/26 11:02:10 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	sort_3(t_stack *head)
{
	t_stack *temp;

	temp = head;
	if(temp->val > temp->next->val && temp->next->val < temp->next->next->val)
		ft_putendl("sa");
	else if (temp->val > temp->next->val && temp->next->val > temp->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if (temp->val > temp->next->val && temp->next->val < temp->next->next->val)
		ft_putendl("ra");
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
		ft_putendl("rra");
}



/*void 	sort_5(t_stack *head)
{
	t_stack *temp;
	
	ft_putendl("pb");
	ft_putendl("pb");
	temp = head;
	if(temp->val > temp->next->val && temp->next->val < temp->next->next->val)
		ft_putendl("sa");
	else if (temp->val > temp->next->val && temp->next->val > temp->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("rra");
	}
	else if (temp->val > temp->next->val && temp->next->val < temp->next->next->val)
		ft_putendl("ra");
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
	{
		ft_putendl("sa");
		ft_putendl("ra");
	}
	else if (temp->val < temp->next->val && temp->next->val > temp->next->next->val)
		ft_putendl("rra");
}
*/


int		is_sorted(t_stack *head)
{
	t_stack *nodePtr;
    nodePtr = head;
    int i;

    if (!nodePtr)
    	return 0; // Empty list
    i = nodePtr->val;
    nodePtr = nodePtr->next;
    while (nodePtr)
    {
        if(i > nodePtr->val)
        	return -1;
        i = nodePtr->val;
        nodePtr = nodePtr->next;
    }
    return 1;
}
