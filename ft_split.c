/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:28:06 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/02 16:45:06 by jdruba           ###   ########.fr       */
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

// int	main(void)
// {
// 	ft_split("lorem ipsum dolor sit amet, consectetur", ' ');
// }

// my old version (not working perfectly):
// #include "libft.h"

// // #include <stdlib.h>
// // #include <stdio.h>

// // static int ft_strlen(const char *c)
// // {
// // 	int i;
// // 	i = 0;
// // 	while (c[i])
// // 	{
// // 		i++;
// // 	}
// // 	return(i);
// // }

// int ft_strlen_del(char const *s, char c, int i)
// {
// 	int j;
// 	j = i; // to store the old i
// 	while (s[i] != c && s[i] != '\0')
// 	{
// 		i--;
// 	}
// 	return (j - i);
// }

// static unsigned int ft_count_substrings(const char *s, char c)
// {
// 	int i;
// 	int number_of_substrings;

// 	number_of_substrings = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		if(s[i] == c)
// 			i++;
// 		else {
// 			number_of_substrings++;
// 			while(s[i] && s[i] != c)
// 				i++;
// 		}
// 	}
// 	return (number_of_substrings);
// }

// char **ft_split(char const *s, char c)
// {
// 	//first: count occurences of delimiter to know how many strings are needed.
// 	int	i; // i will be the length of s
// 	int substr_l;
// 	int	number_of_substrings; // this will be the number of substrings
// 	char **arr; // this is the array in which I will store the substrings

// 	substr_l = 0; // substr_l will be the counter that counts until each 
//delimiter
// 	number_of_substrings = ft_count_substrings(s, c);

// 	if(!s)
// 		return (0);
// 	// first I have to allocate enough memory for the number of pointers 
//(substrings),
// 	// I will have. Then I add one to store the null determinator
// 	arr = (char**)malloc((number_of_substrings + 1) * sizeof(char*));
// 	arr[number_of_substrings] = NULL;
// 	if(!arr)
// 		return(0);
// 	i = ft_strlen(s) - 1; 
// 	while (number_of_substrings > 0)
// 	{
// 		while (s[i] && s[i] == c)
// 			i--;
// 		substr_l = ft_strlen_del(s,c, i);
// 		//printf("substring length:%d\n", substr_l);
// 		number_of_substrings--;
// 		arr[number_of_substrings] = (char *)malloc((substr_l) * sizeof(char)); 
// malloc memory for each substring . begin at the end.
// 		// finally fill the array....
// 		while(substr_l > 0)
// 		{
// 			arr[number_of_substrings][substr_l -1] = s[i];
// 			if(!arr[number_of_substrings])
// 				return(0);
// 			substr_l--;
// 			i--;
// 		}
// 		//printf("result: %s\n", arr[number_of_substrings]);
// 	}
// 	return(arr);
// }

// int	main(void)
// {
// 	ft_split("lorem ipsum dolor sit amet, consectetur", ' ');
// }