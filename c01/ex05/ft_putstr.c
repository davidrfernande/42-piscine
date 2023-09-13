#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	str1[] = "monkeydluffy";

	ft_putstr(str1);
	printf("%s", str1);
}
