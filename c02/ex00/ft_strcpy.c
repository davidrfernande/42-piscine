#include <unistd.h>

char 	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{	
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	destino[] = "diogo";
	char	source[] = "ant";

	ft_strcpy(destino, source);
	printf("destino: %s\n source: %s", destino, source);
	return (0);
}
