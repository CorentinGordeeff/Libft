/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:11:01 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 13:03:37 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("Test 1 (should be 1): %d\n", ft_isprint('5'));
        printf("Test 2 (should be 1): %d\n", ft_isprint('A'));
        printf("Test 3 (should be 0): %d\n", ft_isprint(127));
        printf("Test 4 (should be 0): %d\n", ft_isprint('\0'));
        return (0);
}
*/
