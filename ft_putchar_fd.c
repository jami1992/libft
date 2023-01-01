/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:43:58 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 13:34:22 by jdruba           ###   ########.fr       */
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
