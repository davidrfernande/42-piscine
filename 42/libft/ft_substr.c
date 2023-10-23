/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:54:51 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/23 16:53:47 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	y;
	size_t	l;
	size_t	end;

	end = 0;
	l = ft_strlen(s);
	if (start < l)
		end = l - start;
	if (end > len)
		end = len;
	sub = (char *)malloc((end + 1) * sizeof(*s));
	y = 0;
	if (sub == NULL || !s)
		return (NULL);
	while (y < len && start <= l)
	{
		sub[y] = s[start];
		y++;
		start++;
	}
	sub[y] = '\0';
	return (sub);
}
