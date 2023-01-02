/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:01:27 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 13:47:34 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
Description:
Outputs the string ’s’ to the given file descriptor followed by a newline.

s:  The string to output.
fd:  The file descriptor on which to write.

Implementation:
-	again, I used pointer arithmetics to save some lines.
-	I increment s within the write function (after writing s to the fd)
-	finally I write a new line.
*/
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("Hallo Welt", 1);
// }
