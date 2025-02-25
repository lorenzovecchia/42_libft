/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddfront_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:54:40 by lvecchia          #+#    #+#             */
/*   Updated: 2023/10/02 09:54:43 by lvecchia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *lastnode;
    if ( lst != 0)
    {
        lastnode = ft_lstlast(*lst);
        if(!lastnode)
            *lst = new;
        else
            lastnode -> next = new;
    }
}
/*
//------------------------funcion que imprime la lista------------------------
static void	ft_print_list(t_list *lst)
{
	int	*data;

	while (lst != NULL)
	{
		data = (int *)lst->content; //se obtiene el contenido del nodo actual
		printf("%d ", *data);// Imprime el contenido del nodo actual
		lst = lst->next;// Avanza al siguiente nodo de la lista
	}
	printf("\n");
}

int	main(void)
{
	int *data1 = (int *)malloc(sizeof(int));
	int *data2 = (int *)malloc(sizeof(int));
	int *data3 = (int *)malloc(sizeof(int));
	*data1 = 42;
	*data2 = 75;
	*data3 = 100;

	t_list *node1 = ft_lstnew(data1);
	t_list *node2 = ft_lstnew(data2);
	t_list *node3 = ft_lstnew(data3);

	node1->next = NULL;
	node2->next = NULL;
	node3->next = NULL;

	ft_lstadd_back(&node1, node2);
	ft_lstadd_back(&node1, node3);

	printf("Contenido de la lista: ");
	ft_print_list(node1);

	// Liberar memoria
	free(data1);
	free(data2);
	free(data3);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/