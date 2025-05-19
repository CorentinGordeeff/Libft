/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/17 15:40:45 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 16:32:54 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h> 

void	my_func(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int	main(void)
{
	char	s[] = "hello world";

	ft_striteri(s, my_func);
	printf("%s", s);
	return (0);
}
*/
