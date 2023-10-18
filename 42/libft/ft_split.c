/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/18 13:40:18 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

static int	ft_countw(const char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
			i++;
		w++;
	}
	if (str[i - 1] == c)
		w--;
	return (w);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		j;
	size_t	i;
	char	**strs;

	x = 0;
	i = 0;
	strs = (char **)malloc((ft_countw(s, c) + 1) * sizeof(unsigned char *));
	if (!strs)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		if (j > 0)
			strs[x++] = ft_substr(s, i, j);
		i = i + j;
	}
	strs[x] = 0;
	return (strs);
}
