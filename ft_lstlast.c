t_list *ft_lstlast(t_list *lst)
{
    t_list* current_node;

    if (lst == NULL)
    {
        return (NULL);
    }
    current_node = lst;
    while (current_node->next != NULL)
    {
       current_node = current_node->next;
    }
    return (current_node);
}
