/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 05:23:03 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/11 18:05:05 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (to_find[x] != '\0')
		{
			if (str[i + x] == to_find[x])
			{
				x++;
			}
			else
				break ;
		}
		if (to_find[x] == '\0')
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "monkeydluffy";
	char	find[] = "luff";

	printf("found: %s\n in: %s\n", ft_strstr(str1, find), str1);
}
*/