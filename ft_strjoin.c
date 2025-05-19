/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/17 15:46:19 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/17 21:25:23 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*str3;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup((char *)s2));
	else if (s2 == NULL)
		return (ft_strdup((char *)s1));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str3 = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (str3 == NULL)
		return (NULL);
	ft_strlcpy(str3, s1, lens1 + 1);
	ft_strlcat(str3, s2, lens1 + lens2 + 1);
	return (str3);
}

/* ft_strdup returns a newly malloc allocated string, not a static one. */
/* Malloc for s1, s2 + 1 byte for NULL Terminator. */
/* We initialize first str3 with s1 finishing with Null terminator. */
/* We then append str3 with s2 finishing with Null terminator. */
