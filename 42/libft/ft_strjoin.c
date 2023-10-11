/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:30:04 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 16:30:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int s1len;
    int s2len;
    int strlen;
    size_t  x;
    size_t  y;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);
    strlen = s1len + s2len;
    str = (char *)malloc((strlen + 1)* sizeof(char));
    x = 0;
    y = 0;
    if (!str)
        return (0);
    while (!s1)
    {
        str[x] = s1[x];
        x++;
    }
    while (!s2)
    {
        str[x + y] = s2[y];
        x++;
        y++;
    }
    str[x + y] = '\0';
    return (str);
}
/*
int main()
{
    char    *s1 = "ola";
    char    *s2 = "adeus";

    printf("%s", ft_strjoin(s1, s2));
}*/