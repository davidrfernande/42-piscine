/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:17:45 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/17 20:39:36 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	final;

	x = 1;
	final = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (x < nb)
		{
			final = final * x;
			x++;
		}
	}
	return (final);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 0;
	printf("%d", ft_iterative_factorial(nbr));
}*/
