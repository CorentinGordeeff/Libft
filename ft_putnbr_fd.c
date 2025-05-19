/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: cgordeef <cgordeef@student.42barcelon	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/05/13 16:13:53 by cgordeef	       #+#    #+#	      */
/*   Updated: 2025/05/19 18:56:01 by cgordeef         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b = b * -1;
	}
	if (b > 9)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putnbr_fd(b % 10, fd);
	}
	else
		ft_putchar_fd(b + '0', fd);
}
/*
int main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(7, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-3, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-98765, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/
