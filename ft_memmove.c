/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 18:46:54 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 13:23:50 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *) dest;
	s = (unsigned const char *) src;
	i = 0;
	if (dest > src)
	{
		while (n > i)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* Reading from Right to left in case Dest is bigger than src */
/* Start at n-1 to avoid the Null Terminator */
/*
#include <stdio.h>
int     main(void)
{
        char    src[30] = "Hello my beeautiful World";
        char    dest[30] = "     Haaaaaaaaaaaaaa";

        printf("Pointer address of src:%p\n", src);
        printf("Pointer address of dest:%p\n", dest);
	printf("Value of Dest before function:%s\n", dest);
        ft_memmove(dest, src, 15);
        printf("Value of Dest after function:%s\n", dest);
        return (0);
}
*/
