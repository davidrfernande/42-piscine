/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:08:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 14:08:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t x;
    char    *sub;
    size_t y;

    sub = (char *)malloc(len * sizeof(char));
    x = 0;
    y = 0;
    if (!sub)
        return (0);
    while (s[x] != '\0')
    {
        if (s[x] == (char)start)
        {
            while (y != len)
            {
                sub[y] = s[x];
                x++;
                y++;
            }
        }
        x++;
    }
    return (sub);
}
/*
int main()
{
    char    *str = "onepiece";
    char    st = 'p';
    int s = 3;

    printf("%s", ft_substr(str, st, s));
}*/