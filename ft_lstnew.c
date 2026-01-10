
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

t_list  *ft_lstnew(void *content)
{
    t_list*      root_node;

    root_node = malloc(sizeof(t_list));
    if (root_node == NULL)
    {
        return (NULL);
    }
    root_node->content = content;
    root_node->next = NULL;
    return (root_node);
}

/*
int main(void)
{

typedef struct s_list
{
    void*   content;
    struct s_list*  next;
}   t_list;

    printf("Value of content:%p", ft_lstnew((void *)42));
    return(0);
}
*/
