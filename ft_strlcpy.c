/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:40:28 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 13:10:09 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description:
strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
NUL-terminating the result if dstsize is not 0.

Return Value:
total length of the string, tried to create.

Own words:
we have two strings: src and dst.
in src we have something stored (e.g. a word, or just some char or a story..)
we copy sign by sign to dst. We stop at dstsize - 1.
We null-terminate. Exception: if dstsize is 0.

Implementation:
-	I created a counting variable and a variable for the length of src.
-	I use this ft_strlen without size_t because the strlen with size_t
	gives me an error message in case of empty string "";
-	if dstsize is 0, we return j immediately (by skipping the while-
	loop)
-	while loop is only executed if dstsize is not empty / zero!
-	while-loop iterates through src until dstsize - 1 and copies
	src to dst.
-	finally dst is null-determinated
-	j is returned.
*/

int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if ((size_t)dstsize)
	{
		while (src[i] && i < (size_t)dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

//  int main(void)
// {
// 	ft_strlcpy("Hallo Welt",  "", 15);
// }