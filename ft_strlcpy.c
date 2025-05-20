/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 20:38:49 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/20 18:49:20 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(src);
	if (size == 0)
	{
		return (i);
	}
	else
	{
		while (j < size - 1 && src[j] != '\0')
		{
			dst[j] = src[j];
			j++;
		}
	}
	dst[j] = '\0';
	return (i);
}
/* j < size - 1 to leave space for the NUll terminator */
/* You risk overflowing dst if you copy up to size characters */
/*
#include <stdio.h>
int     main(void)
{
        char    src[] = "Hello World";
        char    dest[] = "Hello my beautiful World";

        printf("Value of src:%s\n", src);
        printf("Value of dest:%s\n", dest);
        printf("Lenght of source string:%zu\n", ft_strlcpy(dest, src, 10));
        printf("New Value of src:%s\n", src);
        printf("New Value of dest:%s\n", dest);
        return (0);
}
*/
