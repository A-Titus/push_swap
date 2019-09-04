

#include "push_swap.h"

void	error(void)
{
	ft_putendl_fd("Error", STDERR_FILENO);
	exit(1);
}

void	win(void)
{
	ft_putendl("OK");
}
												///////////////////////////////////////////////////////////////dinish
void	ko(void)
{
	ft_putendl("KO");
}

int		gt(int a, int b)
{
	return (a > b);
}

int		lt(int a, int b)
{
	return (a < b);
}
