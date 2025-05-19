/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:41:53 by cgordeef          #+#    #+#             */
/*   Updated: 2025/05/17 20:48:48 by cgordeef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	if (n < 0)
		num *= -1;
	digits = get_digits(num);
	if (n < 0)
		digits++;
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (str_num == NULL)
		return (NULL);
	str_num[digits] = '\0';
	while (digits--)
	{
		str_num[digits] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
/*We check n < 0 3 times: once to convert it to a postive */
/*A second time to increment the digit to factor the '-' */
/*The last time to add the sign minus to the first position */
/*
#include <stdio.h>
int	main(void)
{
	int	n;

	n = -5660;
	printf("Value of itoa of number%d: %s", n, ft_itoa(n));
	return (0);
}
*/
