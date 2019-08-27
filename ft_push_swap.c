#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	int length;
	if (argc >= 3)
	{
		a =  add_node(argc, argv);
		length = list_size(a);
		if (length > 5)
		{
			if (length % 2 == 0)
			{
				length = length * 1;
				ft_putendl("exit");
				ft_putnbr(length);
			}
			else 
			{
				length = (length/2) + 1; 
			}
		}
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
		else
		{
			//sort_all(a);
			return ;
		}
	}
}

void		experiment(int argc, char **argv)
{
	a = add_node(argc, argv);
	
	while (is_sorted(a) != 1)
	{
		push_swap(argc, argv);
	}
}

int		main(int argc, char **argv)
{
//	push_swap(argc, argv);
	experiment(argc, argv);
	return (0);
}
