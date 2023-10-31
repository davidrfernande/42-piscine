/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:33:57 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/05 16:56:03 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptra;
	int	*ptrb;
	int	a;
	int	b;

	a = 1;
	b = 2;
	ptra = &a;
	ptrb = &b;
	ft_swap(ptra, ptrb);
	printf(" %d %d", a, b);
}
*/
