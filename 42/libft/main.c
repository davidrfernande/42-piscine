/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:29:14 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/17 16:37:48 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void print_str_tab(char **tab)
{
	int i = 0;

	while (tab[i])
	{
		printf("%d: %s\n", i, tab[i]);
		i++;
	}
    printf("%d: %s\n", i, tab[i]);
}
int	main(void)
{
	char	*str = "iionepieceisrealii";
	char	c = 'i';
	char	**strs = ft_split(str, c);
	print_str_tab(strs);
}
