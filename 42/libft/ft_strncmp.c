/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:02 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 11:35:32 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	x;

	x = 0;
	while ((str1[x] != '\0' || str2[x] != '\0') && x < n)
	{
		if (str1[x] != str2[x])
			return ((unsigned char)str1[x] - (unsigned char)str2[x]);
		x++;
	}
	return (0);
}
