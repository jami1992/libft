/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:53:54 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 13:43:14 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Outputs the string ’s’ to the given file descriptor.

Implementation:
-	This task can be solved with pointer arithmetics or with index. As pointer
	arithmetics is shorter, I finally implemented pointer arithmetic:
-	iterate through *s
-	write the content of the memory, where s points to to the file desriptor.
-	increment s.

*/
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

// int main()
// {
// 	ft_putstr_fd("Hallo Welt", 1);
// }