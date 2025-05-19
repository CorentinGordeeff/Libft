/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/13 14:57:29 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/13 15:19:59 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	s1[] = "Hello World";
	const char	s2[] = "Hello Worldn";
	size_t	n;

	n = 16;
	printf("S1: %s\n", s1);
	printf("S2: %s\n", s2);
	printf("Strcmp of s1 and s2: %d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
