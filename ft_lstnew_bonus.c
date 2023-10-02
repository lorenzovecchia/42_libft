/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:54:40 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/02 09:54:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 t_list *ft_lstnew(void *content)
{
    t_list  *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(new_node)
    {
        new_node->content = content;
        new_node->next = NULL;
    }
    else
        return
            (NULL);
    return (new_node);
}
/*
int main(void)
{
    //create new node
    int  *data = (int *)malloc(sizeof(int));
    *data = 1234;

    t_list *node = ft_lstnew(data);
    //show content

    if ( node != NULL)
        printf("Contenido del nodo: %d\n", *(int *)(node->content));
    //free memory
    free(data);
    free(node);
}
*/