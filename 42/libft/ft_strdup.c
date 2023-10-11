/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:14:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 12:14:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *string)
{
    char *dup;
    int x;
    int strlen;

    strlen = ft_strlen(string);
    dup = (char *)malloc(strlen * sizeof(char));
    if (!dup)
        return (NULL);
    while (string[x] != '\0')
    {
        dup[x] = string[x];
        x++;
    }
    dup[x] = '\0';
    return (dup);
}
/*
int main()
{
    char    *str = "ola";

    printf("%s", ft_strdup(str));
}*/