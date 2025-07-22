/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:18:24 by cgordeef          #+#    #+#             */
/*   Updated: 2025/06/23 17:26:28 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_print_char(int c)
{
	return (write(1, &c, 1));
}
/*
int	main(void)
{
        ft_putchar('A');
        return (0);
}
*/
