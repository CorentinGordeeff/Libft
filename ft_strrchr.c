/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:09:50 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/19 20:05:51 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;

	i = ft_strlen(str) - 1;
	if (chr == '\0')
	{
		return ((char *)str + i + 1);
	}
	while (i >= 0)
	{
		if (str[i] == (unsigned char)chr)
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (NULL);
}
/* i = ft_strlen(str) - 1: -1 to avoid starting at null terminator */
/* return (str + i + 1) is returning the pointer str + location of i */
/* (char *)str: We cast a char * to str as it is a const char */
/*
#include <stdio.h>
int     main(void)
{
        const char      str[] = "Hello world";
        int     character;

        character = 'd';
        printf("Str:%s\n", str);
        printf("Pointer address of str:%p\n", str);
        printf("Pointer address + char:%p\n", ft_strrchr(str, character));
        return (0);
}
*/
