/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/17 15:53:36 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 20:38:32 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(char) * 1);
		if (substr == NULL)
		{
			return (NULL);
		}
		substr[0] = '\0';
		return (substr);
	}
	size = ft_strlen(s + start);
	if (size > len)
	{
		size = len;
	}
	substr = (char *)malloc(sizeof(char) * (size + 1));
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, (s + start), size + 1);
	return (substr);
}
/* size = len; // Max size to allocate is now len. */
/* substr = (char *)malloc(sizeof(char) * (size + 1)); */
/* size + 1 for NULL terminator. */
/*
#include <stdio.h>
int	main(void)
{
	//char const	s[]= "Hello World and my friends";
	char	*result;

	result = ft_substr("tripouille", 1, 1);
	printf("%s", result);
	free(result);
	return (0);
}
*/
