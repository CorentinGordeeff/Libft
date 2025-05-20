/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/17 15:42:25 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/20 18:47:11 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	start;
	size_t	end;
	char	*trimmed;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i > start && ft_strchr(set, s1[i]))
		i--;
	end = i;
	if (start > end)
		return (ft_strdup(""));
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed == NULL)
		return (NULL);
	len = end - start + 1;
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
/* while (s1[i] != '\0' && ft_strchr(set, s1[i])) */
/* Keep incrementing i until s1[i] is not found in set */
/* trimmed = (char *)malloc(sizeof(char) * (end - start + 2)); */
/* +1 for the null terminator */
/* trimmed[i] = '\0';  Null-terminate the string */
/*
#include <stdio.h>

int	main(void)
{
	//char	s1[] = "      Hello	 World	   ";
	//char	set[] = " ";
	char	*trimmed;

	trimmed = ft_strtrim("	 xxx   xxx", " x");
	printf("Value of trimmed string:%s", trimmed);
	free(trimmed);
	return (0);
	        //i = 0;
        //while (start <= end)
        //      trimmed[i++] = s1[start++];
        //trimmed[i] = '\0';

}
*/
