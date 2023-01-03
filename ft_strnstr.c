/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:37:37 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 16:05:32 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strnstr() function locates the first occurrence of the null-terminated 
string needle in the string haystack, where not more than len characters 
are searched.  Characters that appear after a ‘\0’ character are not searched.
Since the strnstr() function is a FreeBSD specific API, it should only be used 
when portability is not a concern.

Return Values:
-	If needle is an empty string, haystack is returned; 
-	if needle occurs nowhere in haystack, NULL is returned; 
-	otherwise a pointer to the first character of the
	first occurrence of needle is returned.

Own words (in this case a bit less precise than the original!):
-	We look for a string needle in a string haystack (it is like trying
	to find a word in a text)
-	if the "word" we want to find is empty, we return "the full text"
-	if the "word" does not occur in our "text", we return NULL.
-	if we find the "word" in the "text", we return a pointer to the point,
	where the "word" starts.

Implementation:
-	two variables, one for the inner loop (ic) and one for the outer loop (oc)
	are created.
-	if needle is null determinator ("empty word is searched"), the full "text"
	(haystack) is returned.
-	counter variable for outer loop is set to 0;
-	inner while loop for parallel iterating through haystack and needle as 
	long as they are equal. This is realized by using the ic variable,
	that is used as index for needle and is added to the index of haystack.
-	pointer of needle becomes null determ, if there was a word found in 
	haystack. In this case, a pointer to the words position in haystack
	is returned (casting to char*, as the function ft_strnstr
	is of type char-pointer)
-	return 0 to make sure, the compiler happy (and it covers the case
	haystack is null determ and length is zero)
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	oc;
	size_t	ic;

	if (!needle[0])
		return ((char *)haystack);
	oc = 0;
	while (haystack[oc] && oc < len)
	{
		ic = 0;
		while (haystack[oc + ic] && needle[ic] && oc + ic < len
			&& haystack[oc + ic] == needle[ic])
			ic++;
		if (needle[ic] == '\0')
			return ((char *)(haystack + oc));
		oc++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char haystack[] = "Dolor ipsum and so on";
// 	const char needle[] = "ipsum";
// 	printf("original:\t\t%s\n", strnstr(haystack, needle, 11));
// 	printf("own:\t\t\t%s\n", ft_strnstr(haystack, needle, 11));
// 	return (0);
// }
