/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:33:14 by davidro2          #+#    #+#             */
/*   Updated: 2023/09/14 18:22:26 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = argc - 1;
	while (i > 0)
	{
		x = 0;
		while (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
