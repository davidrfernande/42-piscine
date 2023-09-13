#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	nmbr;
	int	*ptr;

	nmbr = 99999;
	ptr = &nmbr;
	ft_ft(ptr);
	printf("%d", nmbr);
}
