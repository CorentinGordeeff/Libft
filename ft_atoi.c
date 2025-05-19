/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/10 17:57:58 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/13 12:26:06 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		val;
	int		result;

	i = 0;
	result = 0;
	val = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			val = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (val * result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	test1[] = " \t\n -42";
	char	test2[] = "0042abc";
	char	test3[] = "+2147483647";
	char	test4[] = "-2147483648";
	char	test5[] = " +--123";

	printf("String after atoi on test1:%d\n", ft_atoi(test1));
	printf("String after atoi on test2:%d\n", ft_atoi(test2));
	printf("String after atoi on test3:%d\n", ft_atoi(test3));
	printf("String after atoi on test4:%d\n", ft_atoi(test4));
	printf("String after atoi on test5:%d\n", ft_atoi(test5));
	return (0);
}
*/
