/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/09 17:31:34 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 19:46:12 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (ptr + i);
		}
		i++;
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
