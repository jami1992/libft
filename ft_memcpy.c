/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:18:14 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 19:43:59 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/*
Documentation:
The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.
Applications in which dst and src might overlap should use memmove(3) instead.

Return Values:
The memcpy() function returns the original value of dst.

Implementation:
-	creating variable i to iterate through destination area. As it caused
	problems to work with src and dst directly, I created pointers, that point
	to dst and src (and casted dst and src to char*).
-	Then the while loop iterates through dst (pointed to by d) and
	replaces the content of each memory address with the content of src 
	(at position i, each).
-	pointer to dst is returned.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	// testing original function:
// 	char s1[] = "abcdefghijklmnopqrstuvwxyz";
// 	char d1[27];
// 	memcpy(d1, s1, sizeof(char) * 27);
// 	printf("d1: %s\n", d1);
// 	char e1[10];
// 	memcpy(e1, s1+8, sizeof(char) * 9);
// 	e1[9] = '\0';
// 	printf("e1: %s\n", e1);

// 	// testing my function:
// 	char s2[] = "abcdefghijklmnopqrstuvwxyz";
// 	char d2[27];
// 	ft_memcpy(d2, s2, sizeof(char) * 27);
// 	printf("d2: %s\n", d2);
// 	char e2[10];
// 	ft_memcpy(e2, s2+8, sizeof(char) * 9);
// 	e2[9] = '\0';
// 	printf("e2: %s\n", e2);
// }
