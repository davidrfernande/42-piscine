#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{
	int	a1;
	int	b1;
	int	resultado;
	int	resto;
	int	*div;
	int	*mod;

	a1 = 10;
	b1 = 3;
	div = &resultado;
	mod = &resto;
	ft_div_mod(a1, b1, div, mod);
	printf("resultado = %d\nresto = %d\n", resultado, resto);
}
