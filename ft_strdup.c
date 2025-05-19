/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:46:32 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/19 15:29:32 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src;

	src = ft_strdup("Hello");
	printf("%s", src);
	free(src);
	return (0);
}
*/
