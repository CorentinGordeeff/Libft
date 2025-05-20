/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:15:13 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/20 19:48:23 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*result;

	if (nitems != 0 && (nitems * size) / nitems != size)
		return (NULL);
	if (nitems == 0 || size == 0)
		result = malloc(1);
	else
		result = malloc(nitems * size);
	if (result == NULL)
		return (NULL);
	if (nitems == 0 || size == 0)
		ft_bzero(result, (1));
	else
		ft_bzero(result, (nitems * size));
	return (result);
}
/* Malloc(1) if nitems or size is 0 to return a unique pointer */
/*Same for ft_bzero(result, 1) to assign a single zero */
/*
#include <stdio.h>

int	main(void)
{
	size_t	nitems;
	size_t	size;
	size_t	i;
	void	*ptr;
	unsigned char	*byte_ptr;

	nitems = 0;
	size = 0;
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
