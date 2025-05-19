/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/10 17:02:10 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 18:56:42 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
/* If 'little' is an empty string, return 'big' immediately */
/* Loop through big up to len or until end of big */
/* Reset j for each new starting index i */
/* Compare characters of little and big starting from i */
/* If full match of little is found, return pointer to match in big */
/* If no match at this index, increment i */
/* If no match is found in the entire range, return NULL */
/*
#include <stdio.h>
int main(void)
{
	char str1[20] = "Hello World";
	char str2[20] = "Hello";

	printf("%s\n", ft_strnstr(str1, str2, 20));
	return (0);
}
*/
