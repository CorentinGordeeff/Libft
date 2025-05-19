/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:41:30 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 12:34:34 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
int     main(void)
{
        int     c;
	int	d;

        c = 52;
	d = '9';
        printf("Is digit c ?:%d\n", ft_isdigit(c));
	printf("Is digit d ?:%d\n", ft_isdigit(d));
}
*/
