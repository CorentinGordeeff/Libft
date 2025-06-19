/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/06/19 15:46:23 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/06/19 15:46:56 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	size_t		i;
	char		*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
