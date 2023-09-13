#include <unistd.h>

int ft_atoi(char *str)
{
    int x;
    int n;
    int final;

    x = 0;
    n = 1;
    final = 0;
    while(str[x] == '\f' || str[x] == '\n' || str[x] == '\r' ||
        str[x] == '\n' || str[x] == '\t' || str[x] == '\v' || str[x] == ' ')
        x++;
    while(str[x] == '-' || str[x] == '+')
    {
        if(str[x] == '-')
        {
            n = n * -1;
        }
        x++;
    }
    while(str[x] <= '9' && str[x] >= '0')
    {
        final = final * 10 + str[x] -48;
        x++;
    }   
    return (final * n);    
}
/*
#include <stdio.h>

int     main(void)
{
    char str1[] = "    ---+--+1234ab567";

    printf("%d", ft_atoi(str1));
}*/
