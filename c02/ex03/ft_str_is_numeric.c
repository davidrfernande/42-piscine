/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:34:01 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/07 15:04:22 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 48 && str[x] <= 57))
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
	char	str[] = "1234";

	printf("%d", ft_str_is_numeric(str));
}*/
