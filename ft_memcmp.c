/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/09 17:48:14 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/13 15:47:59 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}
/*Unsigned char to do byte by byte comparison */
/* No check on Null terminator as we compare byte by byte */
/* memcmp is used for raw comparison */
/*
#include <stdio.h>
int	main(void)
{
	const char	s1[20] = "Hello World";
	const char	s2[20] = "Hello Worlda";
	size_t	n;

	n = 25;
	printf("Pointer1 address before function: %p\n", s1);
	printf("Pointer2 address before function: %p\n", s2);
	ft_memcmp(s1, s2, n);
	printf("Diff s1 s2: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
*/
