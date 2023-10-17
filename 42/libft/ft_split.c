/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:59 by davidro2         ###   ########.fr       */
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

int	ft_findc(char const *s, int start, char c)
{
	while (s[++start] && s[++start] != c);
	return (start);
}

char	*ft_worddup(char const *s, int start, char c)
{
	int		i;
	char	*str;
	int		finish;

	finish = ft_findc(s, start, c);
	i = 0;
	str = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < finish)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int			x;
	size_t		i;
	char	**strs;

	x = 0;
	i = 0;
	strs = (char **)malloc((ft_countw(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			strs[x++] = ft_worddup(s, i, c);
			while (s[i] != c)
				i++;
		}
	}
	strs[x] = 0;
	return (strs);
}
