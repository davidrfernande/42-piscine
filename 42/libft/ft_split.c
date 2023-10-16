/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/16 17:28:32 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	printf("words = %d\n", w);
	return (w);
}

int	ft_findc(char const *s, int start, char c)
{
	while (s[start] && s[start] != c)
		start++;
	return (start);
}

char	*ft_worddup(char const *s, int start, char c)
{
	int		i;
	char	*str;
	int		l;

	l = ft_findc(s, start, c);
	i = 0;
	if (!s || !(str = (char *)malloc((l - start + 1) * sizeof(char *))))
		return NULL;
	while (start < l)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	int		i;
	char	**strs;
	
	x = 0;
	i = 0;
	y = 0;
	if(!s || !(strs = (char **)malloc((ft_countw(s, c) + 1) * sizeof(char *))))
		return NULL;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
			strs[x++] = ft_worddup(s, i, c);//copia o s para uma das strs
		x++;
	}
	return (strs);
}

// int	main()
// {
// 	char	*str = "onepieceisrealiii";
// 	char	c = 'i';
// 	ft_split(str, c);
// 	return (0);
// }