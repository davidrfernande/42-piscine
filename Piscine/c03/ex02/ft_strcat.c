/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:27:31 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/11 18:04:58 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strleng(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dl;

	i = 0;
	dl = ft_strleng(dest);
	while (src[i] != '\0')
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	d[];
	char	s[];

    d[] = "one";
    s[] = "piece";
    printf("%s\n", ft_strcat(d, s));
}
*/