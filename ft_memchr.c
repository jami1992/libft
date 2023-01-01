/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:04:39 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/30 16:04:28 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/*
Description:
"The memchr function locates the first occurrence of c 
(converted to an unsigned char) in the initial n characters 
(each interpreted as unsigned char) of the object pointed to by s."

Own Words:
1. We have a ascii-something saved in c. We have a string s.
We want to find the first occurence of c in the string.
We make sure to avoid memory leaks by using copies (temp 1 and temp2)
We do not work with null determ, because the string can, by definition,
contain null determinators (Plauger, 1991, S. 394)

Implementation:
In the beginning s_copy points to the begin of s. Then it iterates throug
s. It does only iterate as long as the number of iterations at maximum n.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	c_copy = c;
	const unsigned char	*s_copy = s;

	while (n > 0)
	{
		if (*s_copy == c_copy)
			return ((void *) s_copy);
		s_copy++;
		n--;
	}
	return (0);
}

// int	main(void)
// {
// 	char data[] = {'q', 'r', 's', 't', 'u', 'v', 'w', 'x'};
// 	int depth;

// 	depth = 4;
// 	char *pos = memchr(data, 't', depth);
// 	if(pos == NULL)
// 	{
// 		printf("orig: char not found\n");
// 	}
// 	else
// 	{
// 		printf("orig pos[0] = %c\n", pos[0]);
// 		printf("orig pos[1] = %c\n", pos[1]);
// 		printf("orig addr %p\n", pos);
// 	}
// 	char *pos2 = ft_memchr(data, 't', depth);
// 	if(pos2 == NULL)
// 	{
// 		printf("own: char not found\n");
// 	}
// 	else
// 	{
// 		printf("own pos[0] = %c\n", pos2[0]);
// 		printf("own pos[1] = %c\n", pos2[1]);
// 		printf("own addr %p\n", pos2);
// 	}
// 	return (0);
// }
