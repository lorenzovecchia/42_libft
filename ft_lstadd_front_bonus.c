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

/*
lst: ptr to the first node of the list
new: ptr to add at the beginning of the list. 

DESC: Add the "new" mode at the beginning of the list "lst" 

*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(lst != 0)
    {
        new->next = *lst;
        *lst = new;
    } 
}

/*
static void print_list(t_list *lst)
{
    int *data;

    while (lst != 0)
    {
        data = (int *) lst->content; //get content from actual node
        printf ("%d ", *data); // print content
        lst = lst -> next; // go to next node of the list
    }
    printf("\n");
}


int main (void)
{
    // FIRST NODE 
    int *data1 = (int *)malloc(sizeof(int)); 
    *data1 = 5678;
    t_list *node1= (t_list *)malloc(sizeof(t_list));
    node1->content= data1;
    node1->next= NULL;

    printf("node 1 before add: ");
    print_list(node1);
    printf("\n");

    // SECOND NODE 
    int *data2 = (int *)malloc(sizeof(int));
    *data2 = 1234;
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->content = data2;
    node2->next = NULL;

    // add second node in front of the list

    ft_lstadd_front(&node1, node2);

    // print results

    printf("Content of node 1: %d\n", *(int *)node1->content);
    printf("Content of node 2: %d\n", *(int *)node1->next->content);
} */