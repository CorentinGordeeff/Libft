/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:07:55 by cgordeef          #+#    #+#             */
/*   Updated: 2025/07/22 19:56:30 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*current_node;

	if (lst == NULL)
	{
		return (0);
	}
	current_node = lst;
	i = 0;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		i++;

	}
	return (i);
}

/*
t_list *new_node(void *content)
{
    t_list *n = malloc(sizeof(*n));
    if (!n) return NULL;
    n->content = content;
    n->next = NULL;
    return n;
}

int main(void)
{
    t_list *lst;
    t_list *n1, *n2, *n3;


    n1 = new_node("one");
    lst = n1;
    printf("1 node:     %d (expected 1)\n", ft_lstsize(lst));

    n2 = new_node("two");
    n3 = new_node("three");
    n1->next = n2;
    n2->next = n3;
    printf("3 nodes:    %d (expected 3)\n", ft_lstsize(lst));

    free(n3);
    free(n2);
    free(n1);
    return 0;
}
*/
