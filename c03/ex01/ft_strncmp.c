/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:16:59 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/14 11:40:44 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n && (s1[x] != '\0' || s2[x] != '\0'))
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
	char	*s1;
	char	*s2;
	unsigned int		n;

	s1 = "diogo";
	s2 = "diogos";
	n = 2;
	printf("%d", ft_strncmp(s1, s2, n));
}*/
