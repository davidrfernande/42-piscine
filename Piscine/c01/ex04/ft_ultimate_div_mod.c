/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:24:05 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/04 21:55:10 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*
#include <stdio.h>

int	main(void)
{
	int	resultado;
	int	resto;
	int	*ptra;
	int	*ptrb;

	resultado = 10;
	resto = 3;
	ptra = &resultado;
	ptrb = &resto;
	ft_ultimate_div_mod(ptra, ptrb);
	printf("resultado=%d resto=%d", resultado, resto);
}
*/
