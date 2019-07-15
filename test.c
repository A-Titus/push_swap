/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:46:22 by atitus            #+#    #+#             */
/*   Updated: 2019/07/15 14:41:24 by atitus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void push(t_stack **a, int newData)
{
	t_stack *newNode = (t_stack*)malloc(sizeof(t_stack)); 
	newNode->val = newData; 
	newNode->next = (*a);
	(*a) = newNode;
}

int main(void)
{
	t_stack *b = NULL;
	t_stack *a;
	t_stack *a1;
	t_stack *a2;

//	t_stack *b;
//	t_stack *b1;
//	t_stack *b2;

	a = (t_stack*)malloc(sizeof(t_stack));
	a1 = (t_stack*)malloc(sizeof(t_stack));
	a2 = (t_stack*)malloc(sizeof(t_stack));
//	b = (t_stack*)malloc(sizeof(t_stack));
//	b1 = (t_stack*)malloc(sizeof(t_stack));
//	b2 = (t_stack*)malloc(sizeof(t_stack));

	a->val = 5;
	a->next = a1;
	a1->val = 6;
	a1->next = a2;
	a2->val = 7;
	a2->next = NULL;

//	b->val = 90;
//	b->next = b1;
//	b1->val = 2;
//	b1->next = b2;
//	b2->val = 3;
//	b2->next = NULL;

	t_stack *head = NULL;

//push values
push(&b, a->val);

	head = a;
	while(head)
	{
		printf("%d\n", head->val);
		head = head->next;
	}
	
	printf("%s","\n");

	head = b;
	while(head)
	{
		printf("%d\n", head->val);
		head = head->next;
	}
	return(0);
}



