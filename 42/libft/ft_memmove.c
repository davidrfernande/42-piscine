/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:30:31 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/09 14:50:52 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (NULL);
	if (src > dest)
	{
		x = 0;
		while (x < n)
		{
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	else
	{
		x = n;
		while (x > 0)
		{
			x--;
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		}
	}
	return (dest);
}
