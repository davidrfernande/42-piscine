/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:26:18 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/18 12:09:51 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 3 == 0 || nb % 2 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nmr;

	nmr = 4801;
	printf("%d", ft_is_prime(nmr));
}*/
