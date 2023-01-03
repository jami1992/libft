/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:14:29 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 15:59:30 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strncmp function compares not more than n characters (characters that 
follow a null character are not compared) from the array pointed to by s1 
to the array pointed to by s2.

Return Value:
The strncmp function returns an integer greater than, equal to, or less 
than zero, accordingly as the possibly null-terminated array pointed to 
by s1 is greater than, equal to, or less than the possibly null-terminated 
array pointed to by s2.

Own Words:
-	We have two strings (arrays of chars): s1 and s2
-	We have a number n that tells us for how many signs to compare s1 and s2
-	if there is a difference in the first n chars, the string that has the
	higher ascii-value at the position of the first difference is "greater".

Implementation:
-	We include libft.h, because we want to use size_t definition (-> stddef)
	is included in libft.h
-	We iterate as long as n is not reached.
-	At each iteration we check for negative ASCII-Values (like \200 etc.)
-	if we have a negative ASCII-Value, the opposite of the normal return value
 	is returned
-	if s1-ASCII-Value is below s2 ASCII-Value at position of pointer, -1 is
	returned
-	if s2-ASCII-Value is below s1 ASCII-VALUE at position of pointer, 1 is
	returned
-	pointer of s1 and s2 are increased. n is decreased.
-	final return statement to avoid compiler errors.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 < 0)
			return (1);
		if (*s2 < 0)
			return (-1);
		if (*s1 < *s2)
			return (-1);
		if (*s1 > *s2)
			return (1);
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
// 	const char s1[] = "hello aorld!";
// 	const char s2[] = "hello mars!";
// 	int i;

// 	i = 7;
// 	printf("%d\n",strncmp(s1, s2, i));
// 	printf("%d\n",ft_strncmp(s1, s2, i));
// 	// i = 8;
// 	// printf("%d\n",strncmp(s1, s2, i));
// 	// printf("%d\n",ft_strncmp(s1, s2, i));
// }
