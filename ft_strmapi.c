/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/17 15:49:36 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 15:58:52 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* ft_strmapi: Takes a string s. */
/* Applies a function f(index, char) to each character of s.  */
/* Returns a new malloc’d string. */
/*
#include <stdio.h>
char my_func(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(void)
{
	char	*result;
	char	s[] = "hello world";
	int	i;

	i = 0;
	result = ft_strmapi(s, my_func);
	printf("%s", result);
	free(result);
	return (0);
}
*/
