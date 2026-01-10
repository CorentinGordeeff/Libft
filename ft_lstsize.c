int ft_lstsize(t_list *lst)
{
    int i;
    t_list* current_node;
    
    i = 0;
    current_node = lst;
    while (current_node != NULL)
    {
        current_node = current_node->next;
        i++;
    }
    return (i);
}
