/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:32:53 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 12:39:54 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int     main(void)
{
        char    str[20] = "Hello World";
        int             i;

        i = 0;
        ft_bzero(str, 6);
        printf("Value returned by pointer(expecting nothing): %s\n", str);
        printf("Value returned by str[position 0] (expecting 0): %d\n", str[i]);
        return (0);
}
*/
