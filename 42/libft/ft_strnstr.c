/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:20:26 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 15:49:05 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	while (hay[x] && x < n)
	{
		y = 0;
		while (hay[x + y] == needle[y] && hay[x + y] && needle[y] && x + y < n)
			y++;
		if (!needle[y])
			return ((char *)(hay + x));
		x++;
	}
	return (0);
}
