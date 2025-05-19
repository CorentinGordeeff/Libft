/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:58:08 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 13:08:59 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int     main(void)
{
        char    str[20] = "Hello World";

        ft_memset(str, 'a', 6);
        printf("Pointer address: %p\n", ft_memset(str, 'a', 6));
        printf("Value returned by pointer: %s\n", str);
        return (0);
}
*/
