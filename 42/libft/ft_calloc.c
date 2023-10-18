/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:09:13 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/18 14:14:35 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*zero;

	zero = (unsigned char *)malloc(nitems * size);
	if (!zero)
		return (NULL);
	ft_bzero(zero, nitems * size);
	return (zero);
}
