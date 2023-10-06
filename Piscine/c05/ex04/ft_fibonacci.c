/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:51:13 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/18 12:04:06 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>

int	main(void)
{
	int	index;

	index = 9;
	printf("%d", ft_fibonacci(index));
}*/
