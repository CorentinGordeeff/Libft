/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/07 20:38:49 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/17 15:41:34 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (size > 0 && dest_length < size - 1)
	{
		while (src[i] != '\0' && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (size <= dest_length)
		return (size + src_length);
	return (dest_length + src_length);
}
/* dest_length + i < size - 1 ensure there is room in dst */
/* For all already existing characters in dest_length */
/* And the current character from src[i] */
/* And space left for the null terminator */
/* if size <= dest_length, there wasn't enough space to append anything */
/* if size >= There was room to add something so we return the actual lenght */
/*
#include <stdio.h>

int	main(void)
{
	char	str1[20] = "Hello, ";
	char	str2[10] = "Hi ";
	char	str3[5] = "1234";
	printf("%zu\n", ft_strlcat(str1, "World!", 20));
	printf("%s\n", str1);
	printf("%zu\n", ft_strlcat(str2, "there", 7));
	printf("%s\n", str2);
	printf("%zu\n", ft_strlcat(str3, "56", 4));
	printf("%s\n", str3);
	return (0);
}
*/
