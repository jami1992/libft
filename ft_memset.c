/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:10:52 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 14:55:00 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The memset() function writes len bytes of value c (converted to an 
unsigned char) to the string b.

Return Values:
The memset function returns the value of b.

Own words:
we have a string b.
we have an ascii stored in c
we fill the string b with the ascii stored in c
we only do this for the first len bytes.

Implementation:
-	first, I created copys for c and b (to avoid casting. I do
	not like casting due to readability).
-	I iterate through b_copy (which points to b).
-	c_copy is stored where b_copy points to (b)
-	increment b_copy and decrement length.
-	return b - now filled with c for len positions.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	const unsigned char	c_copy = c;
	unsigned char		*b_copy;

	b_copy = b;
	while (len > 0)
	{
		*b_copy = c_copy;
		b_copy++;
		len--;
	}
	return (b);
}

// int	main(void)
// {
// 	char s1[] = "abcdefghijklmnopqrstuvwxyz";
// 	char s2[] = "abcdefghijklmnopqrstuvwxyz";
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	memset(s1, 'a', 5);
// 	ft_memset(s2, 'a', 5);
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// }
