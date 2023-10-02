/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:54:40 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/02 09:54:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst -> next != NULL)
        lst = lst -> next;
    return (lst);
}
/*
int main(void)
{
    //initialising pointers 

    int *data1 = (int *)malloc(sizeof(int));
	int *data2 = (int *)malloc(sizeof(int));
	int *data3 = (int *)malloc(sizeof(int));
	int *data4 = (int *)malloc(sizeof(int));
	*data1 = 10;
	*data2 = 11;
	*data3 = 12;
	*data4 = 13;

    //creating nodes

    t_list *node1 = ft_lstnew(data1);
    t_list *node2 = ft_lstnew(data2);
    t_list *node3 = ft_lstnew(data3);
    t_list *node4 = ft_lstnew(data4);

    // assign content to nodes 

    node1->content = data1;
    node2->content = data2;
    node3->content = data3;
    node4->content = data4;

    //assign the new "next" pointer

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    // obtengo el ultimo nodo de la lista
	t_list *lastNode = ft_lstlast(node1);

    // display results

 	printf("Contenido del ultimo nodo: %d\n", *(int *)(lastNode->content));

    // free
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(data1);
	free(data2);
	free(data3);
	free(data4);

    return(0);
}*/