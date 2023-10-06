/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:32:14 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/19 15:21:32 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x + 1);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int	i;
	int	x;
	
	x = 0;
	i = ft_strlen(src);
	dup = (char *)malloc(i * sizeof(char));
	if (dup == NULL)
		return (0);
	while (src[x] != '\0')
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return(dup);
}

int	main(void)
{
	char str[] = "The One Piece is Real!";

	printf("%s", ft_strdup(str));
	free(dup);
}

	
