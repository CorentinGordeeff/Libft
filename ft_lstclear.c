 void   ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *current_node;
    t_list  *temp_node;
    if (*lst == NULL)
    {
        return ;
    }
    current_node = *lst;
    while (current_node != NULL)
    {
        temp_node = current_node->next;
        del(current_node->content);
        free(current_node);
        current_node = temp_node;
    }
    *lst = NULL;
}
