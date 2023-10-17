/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:33:24 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/17 17:38:36 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
int	ft_intlen(int n)
{
	int len;
	int nr;
	
	nr = n;
	len = 0;
	if (n == 0)
		return (1);
	if (nr < 0)
	{
		len++;
		nr = -nr;
	}
	while (nr != 0)
	{
		nr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int		len;
	unsigned int		nr;

	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nr = -n;
	}
	else
		nr = n;
	if (nr == 0)
		str[0] = '0';
	str[len] = '\0';
	while (nr != 0)
	{
		str[len - 1] = (nr % 10) + 48;
		nr = nr / 10;
		len--;
	}
	return (str);
}
