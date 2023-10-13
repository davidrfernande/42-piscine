/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/14 00:01:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countw(char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (str[i] != c)
			w++;
			while (str[i] != c 
		i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int	countw;
	int	x;
	int	y;

	countw = ft_countw(s, c);
	x = 
}
