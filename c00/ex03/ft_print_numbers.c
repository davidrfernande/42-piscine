#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numb;

	numb = '0';
	while (numb <= '9')
	{
		write(1, &numb, 1);
		numb++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
