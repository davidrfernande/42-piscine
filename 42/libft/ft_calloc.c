/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:09:13 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 17:25:13 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			x;
	size_t			o;
	unsigned char	*zero;

	zero = (unsigned char *)malloc(nitems * size);
	x = 0;
	o = 0;
	if (!zero)
		return (NULL);
	if (size == 0 || nitems == 0)
	{
		size = 1;
		nitems = 1;
	}
	ft_bzero(zero, nitems * size);
	return (zero);
}
