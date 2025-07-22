/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:13:14 by cgordeef          #+#    #+#             */
/*   Updated: 2025/07/22 19:03:00 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		return ;
	}
	new->next = *lst;
	**lst = new;
}
/*
#include <stdio.h>
int     main(void)
{
	t_list**	lst;
        t_list  *node;
        ft_lstadd_front(*lst, node);
        printf("content within new node:%p\n", (t_list *)node->next);

        return (0);
}
*/
