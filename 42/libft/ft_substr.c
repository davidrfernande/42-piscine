/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:54:51 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/18 13:46:01 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*sub;
	size_t	y;
	size_t	end;

	end = 0;
	if (start < ft_strlen(s))
		end = ft_strlen(s) - start;
	if (end > len)
		end = len;
	if (len >= 4294967295)
		len = 4294967295;
	sub = (char *)malloc((end + 1) * sizeof(*s));
	x = start;
	y = 0;
	if (sub == NULL || !s)
		return (NULL);
	while (y < len && start <= ft_strlen(s))
	{
		sub[y] = s[start];
		y++;
		start++;
	}
	sub[y] = '\0';
	return (sub);
}
