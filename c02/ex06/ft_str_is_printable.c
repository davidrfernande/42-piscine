/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:05:24 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/07 21:40:18 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 32 && str[x] <= 126))
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
	char	str[] = "\n";

	printf("%d", ft_str_is_printable(str));
}*/
