/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:53:04 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/11 18:04:55 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] > s2[x])
			return (1);
		else if (s1[x] < s2[x])
			return (-1);
		else
			x++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[];
	char	s2[];

	s1[] = "diogo";
	s2[] = "dzogo";
	printf("%d", ft_strcmp(s1, s2));
}*/