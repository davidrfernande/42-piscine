/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:48:19 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/24 14:51:35 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;
    
    while (*lst)
    {  
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}