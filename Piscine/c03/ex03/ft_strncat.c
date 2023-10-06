/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 02:04:40 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/11 18:05:02 by davidro2         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dl;

	i = 0;
	dl = ft_strleng(dest);
	while (src[i] != '\0' && i < nb)
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
	int		n;

	d[] = "one";
	s[] = "piece";
	n = 4;
	printf("%s", ft_strncat(d, s, n));
}
*/