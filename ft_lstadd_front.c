void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new == NULL)
    {
        return (NULL);
    }   
    new->next = *lst;
    *lst = new;
}
/*
int main(void)
{
    typedef struct  s_list
    {
        struct  s_list* next;
        int value;

    }   t_list;

    t_list* root;
    root = NULL;
    ft_lstadd_front(&root, 
    
}
*/
