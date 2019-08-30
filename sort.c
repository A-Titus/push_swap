#include "push_swap.h"

void	sort_all(t_stack **headRef) 
{ 
    t_stack* head = *headRef; 
    t_stack* a; 
    t_stack* b; 
//	int length_a = 0;
//	int length_b = 0;
    int length = 0;
  

    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
  

  	length = list_size(head);
	if (length % 2 == 0)
	{
		split_nodes(head, &a, &b);
	} else
	{
		head = head->next;
	}

   /*( sort_all(&a); 
    sort_all(&b);*/ 
  
	//length_a = list_size(a);
//	length_b = list_size(b);
	length = list_size(head);
		if(length == 2)
		{
			if(is_sorted(a) != 1)
				ft_putendl("sa");
		}else if (length == 3)
		{
			if(is_sorted(a) != 1)
				sort_3(a);
		}
		else if (length == 4)
		{
			if(is_sorted(a) != 1)
				sort_4(a);
		}else if (length == 5)
		{
			if(is_sorted(a) != 1)
				sort_5(a);
		}

		if (length == 2)
		{
			if(is_sorted(b) != 1)
				ft_putendl("sb");
		}else if (length == 3)
		{
			if(is_sorted(b) != 1 )
				sort_3_b(b);
		}
		else if(length == 4)
		{
			if(is_sorted(b) != 1)
				sort_4_b(b);
		}else if (length == 5)
		{
			if(is_sorted(b) != 1)
				sort_5_b(b);
		}

		if (is_sorted(*headRef) != 1)
		{				
			sort_all(&a);
			sort_all(&b);
		}
		*headRef = sorted_merge(a, b); //????????????????????????
		
}

t_stack* sorted_merge(t_stack* a, t_stack* b) 
{ 
    t_stack* result = NULL; 
  	if (a == NULL)
	   return (b);	
	else if (b == NULL) 
        return (a); 
  
    if (a->val <= b->val) { 
        result = a; 
        result->next = sorted_merge(a->next, b);
    } 
    else { 
        result = b; 
        result->next = sorted_merge(a, b->next); 
    } 
    return (result); 
} 

void split_nodes(t_stack* source, t_stack** front_ref, t_stack** back_ref) 
{ 
    t_stack* fast; 
    t_stack* slow; 
    slow = source; 
    fast = source->next; 
  
    while (fast != NULL) 
	{ 
        fast = fast->next; 
        if (fast != NULL) 
		{ 
            slow = slow->next; 
            fast = fast->next; 
        } 
    }
    *front_ref = source; 
    *back_ref = slow->next; 
    slow->next = NULL; 
} 

 
