/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:00:21 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/30 21:52:35 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/*
Description:
The memcmp() function compares byte string s1 against byte string s2.  
Both strings are assumed to be n bytes long

Return Value:
The memcmp() function returns zero if the two strings are identical, otherwise 
returns the difference between the first two differing bytes (treated as 
unsigned char values, so that ‘\200’ is greater than ‘\0’, for example).  
Zero-length strings are always identical.  This behavior is not required 
by C and portable code should only depend on the sign of the
returned value.

Own words:
-	byte-wise comparison of s1 and s2. At first difference calculate difference
	and return it.

Implementation:
-	create two pointers p and q and cast s1 and s2 to them.
-	while-loops iterates as long as n is greater than 0 ("while(n)" is equal
	to "while(n > 0)"). 
-	At each iteration the memory, where p and q point to, are compared. 
		If they are different, the difference is returned. 
		Otherwise p and q are coutnted up, n down.
-	return 0, if no differences are found after n iterations.

Resources:
https://stackoverflow.com/questions/18853054/building-memcmp-function-in-c
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	while (n)
	{
		if (*p != *q)
		{
			return (*p - *q);
		}
		n--;
		p++;
		q++;
	}
	return (0);
}

// int	main()
// {
// 	int ret1 = 0;
// 	int ret2 = 0;
// 	int len = 1;
// 	char s1[] = "\0-";
// 	char s2[] = "\0";

// 	//int s1[] = {6, 2, 3};
// 	//int s2[] = {1, 2, 3, 4};

// 	ret1 = memcmp(s1, s2, len);
// 	if(ret1 > 0)
// 	{
// 		printf("original:\ts2 is less than s1\n");
// 	}
// 	else if (ret1 < 0)
// 	{
// 		printf("original:\ts1 is less than s2\n");
// 	}
// 	else
// 	{
// 		printf("original:\ts1 is equal to s2\n");
// 	}

// 	ret2 = ft_memcmp(s1, s2, len);
// 	if(ret2 > 0)
// 	{
// 		printf("own:\t\ts2 is less than s1\n");
// 	}
// 	else if (ret2 < 0)
// 	{
// 		printf("own:\t\ts1 is less than s2\n");
// 	}
// 	else
// 	{
// 		printf("own:\t\ts1 is equal to s2\n");
// 	}
// 	return (0);
// 	}
