/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:42:43 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 13:54:44 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description:
Outputs the integer ’n’ to the given file descriptor.

n:  The integer to output.
fd:  The file descriptor on which to write.

Implementation:
-	in case of negative int, - is written to fd and n is multiplied with -1
-	in case of min integer, this is written to fd with a static helper function
-	in case of all int except min int, the putnbr_fd function is called
	recursively (dividing n by 10 each time, as we are in a base10 system).
-	if n is not min int, it is written to the fd by calling ft_putchar.
	ASCII-Shifting is applied.
*/

static void	ft_minint(int fd)
{
	write(fd, "-2147483648", 11);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0 && n > -2147483648)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n == -2147483648)
		ft_minint(fd);
	if (n / 10 && n != -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	if (n != -2147483648)
		ft_putchar_fd(((n % 10) + 48), fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// }