/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:09:13 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/11 23:06:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*zero;
	
	zero = (unsigned char *)malloc(nitems * size);
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
