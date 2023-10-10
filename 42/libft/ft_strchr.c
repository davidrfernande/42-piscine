/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:11:53 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/10 10:35:22 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == (char)c)
			break ;
		x++;
	}
	if (str[x] == (char)c)
		return ((char *)(str + x));
	return (0);
}
