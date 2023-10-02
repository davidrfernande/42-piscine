/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:14:02 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/17 16:50:21 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	nmr;

	nmr = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nmr, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nmr;
	int	pot;

	nmr = 2;
	pot = 4;
	printf("%d", ft_recursive_power(nmr, pot));
}*/
