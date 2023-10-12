/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:54:51 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/12 18:22:05 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*sub;
	size_t	y;

	if (len >= 4294967295)
		len = 4294967295;
	sub = (char *)malloc((len + 1) * sizeof(*s));
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
