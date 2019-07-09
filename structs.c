/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 08:17:57 by atitus            #+#    #+#             */
/*   Updated: 2019/07/09 15:51:14 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	typedef struct stack_a
	{
		int val;
		struct stack_a *next;
	}stack_a;

	stack_a * n1;
	stack_a * n2;

	n1 = malloc(sizeof(stack_a));
	n2 = malloc(sizeof(stack_a));

	n1->val = atoi(argv[1]);
	n1->next = n2;
	
	n2->val = atoi(argv[2]);
	n2->next = NULL;

	stack_a * temp;
	temp = malloc(sizeof(stack_a));
	stack_a * head;
	head = malloc(sizeof(stack_a));
	
	head->next = n2;
	n2->next = n1;
	n1->next = NULL;

	temp = n2;

	while(temp != NULL)
	{
		printf("%d\n",temp->val);
		temp = temp->next;
	}
	return (0);
}
