/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 23:47:52 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 15:24:17 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
strlcat() appends string src to the end of dst.  It will append at most 
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
dstsize is 0 or the original dst string was longer than dstsize (in practice 
this should not happen as it means that either dstsize is incorrect or that 
dst is not a proper string)
If the src and dst strings overlap, the behavior is undefined.

Return Value:
The total length of the string created (or not created, if failed).

Own words:
We have a string with some content: src.
We have another string: dst.
At the end of dst, we want to append src.
But only at most dstsize - strlen(dst) - 1 characters
Normally Null determinator is added
exception from that, if dstsize is 0 or dst > dstsize
Bad things might happen, if dst and src overlap!

strlcat is just a strlcpy where you have to iterate through 
the pointer of dst first.

Implementation:
-	create counter variable i and set it to 0.
-	check if destination pointer points to null. If so:
	return the length of source and copy dstsize byte of 
	src to dst.
-	iterate through dst for dstsize bytes
-	as we iterated through dst, we can cpy src to dst (add
	i bytes).
-	null determination is handled by strlcpy function.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dst == NULL)
	{
		ft_strlcpy(dst, src, dstsize);
		return (ft_strlen(src));
	}
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	return (ft_strlcpy(dst, src, dstsize - i) + i);
}

// int	main()
// {
// 	printf("%d\n", ft_strlcat("12345", "String with 19 char", 5));
// }