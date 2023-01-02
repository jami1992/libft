/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:11:15 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/02 16:57:31 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
Description:
Allocates (with malloc(3)) and returns a new string, which is the result of the 
concatenation of ’s1’ and ’s2’.

Return Value(s):
-	The new string.
-	NULL if the allocation fails.

Implementation:
-	For this functino I use an int ft_strlen to avoid ""-issues...
-	counter variables i and j are declared and initialized
-	char pointer p (that points to the string that results from concatenation
	of s1 and s2 is created)
-	sufficient memory is allocated for the new string and its null-determ.
-	if pointer or one of the strings are empty, null is returned.
-	first while loop writes the first string to the new string
-	second while loop writes the second string to the new string (here
	usage of i is continued to make sure, the  second string is written to the
	end of the first string).
-	before the new string is returned, it is null-determined.
-	finally, the new string is returned.
*/

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s[0] == '\0')
		return (1);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (!(ft_strlen(s1) || ft_strlen(s2)))
		return (0);
	p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!p)
		return (0);
	while (i < ft_strlen(s1) && s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2) && s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void) /
// {
// 	printf("%s\n", ft_strjoin("lorem ipsum", "dolor sit amet"));
// }
