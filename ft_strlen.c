/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:29:15 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/17 19:00:29 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("Test 1 (should be 11): %zu\n", ft_strlen("Hello World"));
        printf("Test 2 (should be 1): %zu\n", ft_strlen("A"));
        return (0);
}
*/
