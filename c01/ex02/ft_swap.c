#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*ap;
	int	*bp;

	a = 1;
	b = 2;
	ap = &a;
	bp = &b;
	ft_swap(ap, bp);
	printf("%d %d", a, b);	
}
