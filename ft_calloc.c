/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:15:13 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/19 13:50:23 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*result;

	if (nitems != 0 && (nitems * size) / nitems != size)
	{
		return (NULL);
	}
	result = malloc(nitems * size);
	if (result == NULL)
	{
		return (NULL);
	}
	ft_bzero(result, (nitems * size));
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	nitems;
	size_t	size;
	size_t	i;
	void	*ptr;
	unsigned char	*byte_ptr;

	nitems = 2;
	size = 4;
	printf("Value returned by calloc:%p\n", calloc(nitems, size));
	ptr = ft_calloc(nitems, size);
	if (ptr != NULL)
	{
		byte_ptr = (unsigned char *)ptr;
	}
	i = 0;
	while (i < nitems * size)
	{
		if (byte_ptr[i] != 0)
		{
			printf("Non-zero byte found at index i\n");
			return (0);
		}
		i++;
	}
	free(byte_ptr);
	printf("Only zero byte found at index i\n");
	return (0);
}
*/
