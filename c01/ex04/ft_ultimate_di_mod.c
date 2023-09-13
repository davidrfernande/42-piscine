#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;
	
	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

#include <stdio.h>

int	main(void)
{
	int	a1;
	int	b1;
	int	*ptra;
	int	*ptrb;

	a1 = 10;
	b1 = 3;
	ptra = &a1;
	ptrb = &b1;
	ft_ultimate_div_mod(ptra, ptrb);
	printf("resultado = %d\nresto = %d\n", a1, b1);
}
