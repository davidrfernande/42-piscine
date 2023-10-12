/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:48:05 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/12 14:24:46 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dup;
	size_t	x;
	size_t	strlen;

	strlen = ft_strlen(string);
	dup = (char *)malloc((strlen + 1) * sizeof(char));
	x = 0;
	if (!dup)
		return (NULL);
	while (string[x] != '\0')
	{
		dup[x] = string[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
