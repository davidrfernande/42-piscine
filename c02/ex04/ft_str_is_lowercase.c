/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:07:37 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/07 21:19:56 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 97) && (str[x] <= 122))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "abc";

	printf( "%d", ft_str_is_lowercase(str));
}*/
