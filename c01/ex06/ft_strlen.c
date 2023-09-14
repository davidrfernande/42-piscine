#include <unistd.h>

int	ft_strlen(char *str)
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
	char	*str1;
	
	str1 = "abcdef";
	ft_strlen(str1);
}
