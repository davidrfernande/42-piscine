/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:07:29 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/16 16:47:15 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	x;
	int	n;
	int	final;

	x = 0;
	n = 1;
	final = 0;
	while (str[x] == '\f' || str[x] == '\n' || str[x] == '\r' || str[x] == '\t'
		|| str[x] == '\v' || str[x] == ' ')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
		{
			n = n * -1;
		}
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		final = final * 10 + str[x] - 48;
		x++;
	}
	return (final * n);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "     ---+--+1234ab567";

	printf("%d", ft_atoi(str));
}*/
