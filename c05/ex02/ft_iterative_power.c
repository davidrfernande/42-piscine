/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:02:51 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/17 16:12:42 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	nmr;
	int	pot;

	nmr = nb;
	pot = power - 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		while (pot > 0)
		{
			nb = nb * nmr;
			pot--;
		}
		return (nb);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	nmr;
	int	pot;

	nmr = 2;
	pot = 9;
	printf("%d", ft_iterative_power(nmr, pot));
}*/
