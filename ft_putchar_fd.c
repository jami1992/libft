/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:43:58 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 15:00:02 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Outputs the character ’c’ to the given file descriptor.
c:  The character to output.
fd:  The file descriptor on which to write.

Implementation:
-	putchar from piscine, but this time, the first argument is a variable, that
	indicates, which file descriptor to write to.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	char	c;
// 	int		fd;

// 	c = 'a';
// 	fd = 1;
// 	putchar(c);
// 	printf("\n");
// 	ft_putchar_fd(c, fd);
// 	printf("\n");
// }