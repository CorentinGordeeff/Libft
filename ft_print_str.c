/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:18:24 by cgordeef          #+#    #+#             */
/*   Updated: 2025/06/23 17:55:49 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_print_str(const char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
	{
		return (0);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
/*
int	main(void)
{	
	ft_putstr("Hello my beautiful world");
	return (0);
}
*/
