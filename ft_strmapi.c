/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:54:57 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 16:59:08 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Applies the function ’f’ to each character of the string ’s’, and passing its 
index as first argument to create a new string (with malloc(3)) resulting from 
successive applications of ’f’.

Return Value(s):
The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

Own words:
we have a string s
we create a new string with malloc.
we pass the string s to a function f (char by char) to create a new strin in
the space we malloced.

Implementation:
-	We use  strdup() function to allocate sufficient memory for a copy of the 
	string s, do the copy, and return a pointer to it.
-	if s or return value of f are empty, we return NULL
-	we iterate through s
-	the function f is applied for each char of s. The return value of
	each application of f on s is saved in ret.
-	finally we return the new string ret. 
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	ret = ft_strdup(s);
	if (!s || !f || !ret)
		return (0);
	if (s)
	{
		i = 0;
		while (s[i])
		{
			ret[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (ret);
}

// char f (unsigned int i, char c)
// {
// 	i = 0;
// 	return (toupper(c + i));
// }
// int main ()
// {
// 	char const *hw = "hello world";
// 	printf("%s",ft_strmapi(hw ,f));
// }