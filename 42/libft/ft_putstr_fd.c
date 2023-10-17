/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:30:02 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/17 17:35:54 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Outputs the string ’s’ to the given file descriptor
void    ft_putstr_fd(char *s, int fd)
{
    unsigned int    i;

    i = 0;
    if (s)
    {
        while (s[i])
        {
            ft_putchar_fd(fd, &s[i], 1);
            i++;
        }
    }
}
