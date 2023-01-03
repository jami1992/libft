/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:28:06 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 16:34:58 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Allocates (with malloc(3)) and returns an array of strings obtained by 
splitting ’s’ using the character ’c’ as a delimiter.  The array must end
with a NULL pointer.

s:  The string to be split.
c:  The delimiter character.

Return value(s):
The array of new strings resulting from the split.
NULL if the allocation fails.

Implementation:
-	Variables for substring-length, the array to be returned and an
	index variable for the elements of the array to be returned 
	are declared
-	i and array size are initialized. For initialisation of the
	array size, the function ft_count_substrings is used:
	-	counter variables are created.
	-	Iteration through s:
		-	as long, as the current char is equal to the searched
			char (=multiple delimitors one after another or a single
			delimitor), only i is increased.
		-	as soon, as the current char of s and the delimitor are
			different, the number of substrings is increased. Then,
			i is increased until the substring ends.
	-	number of substrings is returned.
-	string and the array of substrings are protected (if(!s || !arr))
-	null determinator is attached as the last element of s.
-	Iteration through the original string, using counter arithmetics (to
	avoid lines in the split function :))
	-	if the pointer *s points to a memory address, that contains the char c,
		the next memory address is checked.
	-	if s points to something that is not c:
		-	the substring length (length until next delimitor) is calculated
		-	then the i-th element of the array (that will be returned) is filled,
			using the substring function.
	-	finally, the new array is returned.
		
*/
static size_t	ft_count_substrings(const char *s, char c)
{
	int	i;
	int	number_of_substrings;

	number_of_substrings = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			number_of_substrings++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (number_of_substrings);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		substr_l;
	char	**arr;

	i = 0;
	arr = (char **)malloc((ft_count_substrings(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (0);
	arr[ft_count_substrings(s, c)] = NULL;
	while (*s)
	{
		if (*s != c)
		{
			substr_l = 0;
			while (*s && *s != c)
			{
				substr_l++;
				s++;
			}
			arr[i++] = ft_substr(s - substr_l, 0, substr_l);
		}
		else
			s++;
	}
	return (arr);
}

// int main () {
// 	char * splitme = "This is a string";
// 	char **ptr = ft_split(splitme, ' ');
// 	while (*ptr && printf("%s\n", *ptr))
// 		ptr++;
// }