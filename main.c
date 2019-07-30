#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	a = add_node(argc, argv);
	if(list_size(a) == 2)
	{
		if(is_sorted(a) != 1)
			ft_putendl("sa");
	}else if (list_size(a) == 3)
	{
		if(is_sorted(a) != 1)
			sort_3(&a);
	}
	return (0);
}
