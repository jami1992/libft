/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:49:52 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 14:05:33 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
C-Standard description:
The memmove function copies n characters from the object pointed to by s2 
into the object pointed to by s1. Copying takes place as if the n characters 
from the object pointed to by s2 are first copied into a temporary array of n 
characters that does not overlap the objects pointed to by s1 and s2, and then 
the n characters from the temporary array are copied into the object pointed 
to by s1.

Return Value:
The memmove function returns the value of s1.

Own words:
We have two strings: s1 and s2. Something is in s2. It should be copied to s1.
BUT: Only if s1 (dst) and s2 (src) do not overlap. 
Therefore we work with a temporary array with length n char.
From this array we copy to s1.

Implementation:
First while loop copies forwards (if the something, we have in src is
"smaller" than the dst and if not more char from src are to be
copied than dst has space for.
Otherwise as much as possible is copied by iterating thourgh len from
the beginning up to the point where len is reached (the number of 
chars to copy).
dst has to be void-pointer-casted, as the function is of type void-pointer.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_copy;
	const char	*src_copy;

	dst_copy = dst;
	src_copy = src;
	if (src_copy < dst_copy && dst_copy < src_copy + len)
	{
		dst_copy = dst_copy + len;
		src_copy = src_copy + len;
		while (len > 0)
		{
			*--dst_copy = *--src_copy;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*dst_copy++ = *src_copy++;
			len--;
		}
	}
	return ((void *) dst);
}

// int	main ()
// {
// 	char	str1[50] = "This is a string that works totally fine";
// 	char	str2[50] = "This is a string that works totally fine";

// 	printf( "Function:\tmemmove with overlap\n" );
//     printf( "Orignal :\t%s\n",str1);
//     printf( "Source:\t\t%s\n", str1 + 5 );
//     printf( "Destination:\t%s\n", str1 + 11 );
//     memmove( str1 + 11, str1 + 5, 29 );
//     printf( "Result:\t\t%s\n", str1 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );

//     //Use of memcpy
//     printf( "Function:\tmemcpy with overlap\n" );
//     printf( "Orignal :\t%s\n",str2);
//     printf( "Source:\t\t%s\n", str2 + 5 );
//     printf( "Destination:\t%s\n", str2 + 11 );
//     memcpy( str2 + 11, str2 + 5, 29 );
//     printf( "Result:\t\t%s\n", str2 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str2 ) );

// 	char	str3[50] = "This is a s#ring that works totally fine";
// 	char	str4[50] = "This is a string that works totally fine";
// 	//using my own memmove
// 	printf( "Function:\town memmove with overlap\n" );
//     printf( "Orignal :\t%s\n",str3);
//     printf( "Source:\t\t%s\n", str3 + 5 );
//     printf( "Destination:\t%s\n", str3 + 11 );
//     ft_memmove( str3 + 11, str3 + 5, 29 );
//     printf( "Result:\t\t%s\n", str3 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str3 ) );

//     //Use of my own memcpy
//     printf( "Function:\town memcpy with overlap\n" );
//     printf( "Orignal :\t%s\n",str4);
//     printf( "Source:\t\t%s\n", str4 + 5 );
//     printf( "Destination:\t%s\n", str4 + 11 );
//     ft_memcpy( str4 + 11, str4 + 5, 29 );
//     printf( "Result:\t\t%s\n", str4 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str4 ) );

//     return 0;
// }
