/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:48:02 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/13 12:37:54 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>
int     main(void)
{
        int     c;
	int	d;
	int	e;

        c = 50;
	d = 'a';
	e = 8;
        printf("Is alpha or digit c ?:%d\n", ft_isalnum(c));
	printf("Is alpha or digit d ?:%d\n", ft_isalnum(d));
	printf("Is alpha or digit e ?:%d\n", ft_isalnum(e));
}
*/
