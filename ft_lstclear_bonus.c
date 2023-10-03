/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:54:40 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/02 09:54:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current;
    t_list  *next;

    current = *lst;
    while (current != NULL)
    {
        next = current->next;
        del(current->content);
        free(current);
        current = next;
    }
    *lst =  NULL;
}
