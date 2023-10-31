/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:30:24 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/19 15:21:00 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	x;
	int	y;
	
	x = 0;
	y = (max - min);
	range = (int *)malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (0);
	while (y > 0)
	{
		range[x] = min;
		x++;
		min++;
		y--;
	}	 
	return (range);
}

int	main(void)
{
	int	min;
	int	max;
	int	x;
	int 	*range;
	int	i;
	
	i = 0;
	min = 2;
	max = 8;
	x = max - min;
	range = ft_range(min, max);
	while (x > 0)
	{
		printf("%d", range[i]);
		x--;
		i++;
	}
	return (0);
	free(range);
}
