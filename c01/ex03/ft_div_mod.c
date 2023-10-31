/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:52:35 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/04 20:17:30 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	*ptrd;
	int	*ptrm;
	int	div;
	int	mod;

	x = 10;
	y = 3;
	ptrd = &div;
	ptrm = &mod;
	ft_div_mod(x, y, ptrd, ptrm);
	printf("resultado=%d resto=%d", div, mod);
}
*/
