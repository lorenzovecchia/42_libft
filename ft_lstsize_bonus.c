#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != NULL)
    {
        count ++;
        lst = lst -> next;
    }
    return (count);
}

/*
int main(void)
{
    //initialising pointers 

    int *data1 = (int *)12;
    int *data2 = (int *)34;
    int *data3 = (int *)56;
    int *data4 = (int *)78;

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

    // display results

    printf("The current number of nodes is %d\n", ft_lstsize(node1));

    // free
    
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return(0);
}*/