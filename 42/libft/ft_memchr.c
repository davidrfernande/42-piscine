/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:36:04 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 12:07:44 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;

	str = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
			return ((void *)(s + x));
		x++;
	}
	return (0);
}
