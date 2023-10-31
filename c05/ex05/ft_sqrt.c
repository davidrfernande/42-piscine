/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:05:47 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/18 12:04:27 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	y;

	y = 0;
	if (nb <= 0)
		return (0);
	else
	{
		while (y <= 46340) 
		{
			if (y * y == nb)
			{
				return (y);
			}
			y++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	
	nb = 2147395600;
	printf("%d", ft_sqrt(nb));
}*/
