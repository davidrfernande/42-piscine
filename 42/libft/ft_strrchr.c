/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:51:32 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/09 18:59:38 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	x;

	x = ft_strlen(str);
	while (x > 0)
	{
		if (str[x] == (char)c)
			break ;
		x--;
	}
	if (str[x] == (char)c)
		return ((char *)(str + x));
	return (0);
}
