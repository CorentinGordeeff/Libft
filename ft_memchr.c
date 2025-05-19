/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/09 17:31:34 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/13 15:34:02 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n && ptr[i] != '\0')
	{
		if (ptr[i] == c)
		{
			return (ptr + i);
		}
		i++;
	}
	if (ptr[i] == '\0')
	{
		return (ptr + i);
	}
	return (NULL);
}
/* Unsigned char used as cast to ensure each bytes is compared correctly */
/* as c is passed as an int with potential negative values */
/*
#include <stdio.h>
int	main(void)
{
	char	str[20] = "Hellao World";
	
	printf("Pointer address before function: %p\n", str);
	ft_memchr(str, 'a', 6);
	printf("Pointer address after: %p\n", ft_memchr(str, 'a', 6));
	return (0);
}
*/
