/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:10:11 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/19 20:02:27 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)character)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (character == '\0')
	{
		return ((char *)str + i);
	}
	return (NULL);
}
/* if (character == '\0') means that we reached the end of the string */
/* return (str + i) is returning the pointer str + location of i */
/* (char *)str: We cast a char * to str as it is a const char */
/*
#include <stdio.h>
int	main(void)
{
	const char	str[] = "Hello world";
	int	character;

	character = 'd';
	printf("Str:%s\n", str);
	printf("Pointer address of str:%p\n", str);
	printf("Pointer address of char in str:%p\n", ft_strchr(str, character));
	return (0);
}
*/
