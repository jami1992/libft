/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:39:19 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/31 13:27:06 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* s1l argument comes with minus one because of null determinator.
the inner while loop checks for each char if it is in set
in the if-statement the 2 is because +1 for null determinator and 
+1 because the while loop counts to far up
*/

/*
Description:
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.
s1:  The string to be trimmed.
set:  The reference set of characters to trim.

Return Values:
The trimmed string.
NULL if the allocation fails.

Own Words:
-	We have a string. We want to trim it. We have some char. They are
	defined in set.
-	We only trim the chars from set, until the first char occurs, that is
	not in set.
-	We do this from the beginning and from the end of the string.

Implementation:
	ft_strtrim:
	-	create and initialize variables for the length of string and set
	-	create and initialize counter variables i and j, with
		j being index of the string and i being index of the set.
	-	if statement makes sure, that we do not cut from empty strings.
	-	the while-i<setl-statement with the nested if-statement moves the
		pointer of s1 forward, as long the chars are in set.
	-	functino create_str is called and its return value is returned.
	create_str:
	-	counter variable l (index of the new string) is declared and
		initialized.
	-	pointer to new string is declared
	-	variable for the end of the string is created by calling the function
		ft_strtrim_frombehind.
		ft_strtrim_frombehind: 
			-	declare and initialize index variable for s1
				and length of s1.
			-	iterate through s1. 
					-	Nested iteration through s1	while it is unequal to
						current char of set.
			-	return the resulting length of s1 (deducted by chars to trim
				from behind).
	-	continue with create_str:
	-	newstring gets the length of s minus the chars to trim plus 1 for null-
		determinator.
	-	iterate through newstring and fill it with s1.
	-	return newstring.
*/
static int	ft_strtrim_frombehind(char const *s1, char const *set)
{
	int	i;
	int	s1l;

	i = 0;
	s1l = ft_strlen(s1);
	while (s1l > 0)
	{
		while (set[i] && s1[s1l - 1] != set[i])
			i++;
		if ((size_t)i == ft_strlen(set))
			break ;
		else
			i = 0;
		s1l --;
	}
	return (s1l);
}

static char	*ft_create_str(char const *s1, char const *set)
{
	int		l;
	char	*newstring;
	int		ende;

	l = 0;
	ende = ft_strtrim_frombehind(s1, set);
	newstring = malloc(ende + 1);
	while (l < ende)
	{
		newstring[l] = *s1;
		l++;
		s1++;
	}
	newstring[l] = '\0';
	return (newstring);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	setl;
	int	j;
	int	s1l;

	i = 0;
	j = 0;
	setl = ft_strlen(set);
	s1l = ft_strlen(s1);
	if (s1l > 0 && setl > 0)
	{
		while (s1[j] != '\0')
		{
			while (i < setl)
			{
				if (*s1 == set[i])
					s1++;
				else
					i++;
			}
			i = 0;
			j++;
		}
	}
	return (ft_create_str(s1, set));
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("aaabcdaadcbaaa", "ab"));
// }
