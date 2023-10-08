/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:30:31 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/08 23:53:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char * temp;
    size_t  x;
    
    x = 0;
    temp = (unsigned char *)src;
    if (!dest || !src)
        return NULL;
    while (n > 0)
    {
        (unsigned char *)dest[x] = temp[x];
        x++; 
    }
    return (dest);
}