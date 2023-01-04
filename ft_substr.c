/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:42:34 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/04 14:08:47 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

/*
Description:
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.

Return Value:
-	The substring.
-	NULL if the allocation fails.

Implementation:
-	create and initialize counter-variables i and j and a char pointer for
	the substring
-	if the len argument has a length, that is shorter than the original
	string, then the len variable gets the length of the string s.
-	sufficient memory for the substring + null determinator is allocated.
-	if substring or string are empty, null is returned.
-	iterate through the string.
		if statement: 	i >= start catches the start of the substring.
						j < len makes sure, that the creation of the sub-
						string is limited to the intended length.
						- create substring and increment j to go to next
						index of substring.
		increment i
-	add null determinator
-	return substring.
	*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substring;

	i = 0;
	j = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	substring = malloc(len + 1);
	if (!(s || substring) || !(s && substring))
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			substring[j] = s[i];
			j++;
		}
		i++;
	}
	substring[j] = '\0';
	return (substring);
}

// int	main()
// {
// 	printf("%s\n", ft_substr("hola", 0, 5));
// }