/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 08:14:10 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 16:38:09 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strdup() function allocates sufficient memory for a copy of the string s1,
does the copy, and returns a pointer to it.  The pointer may subsequently be used
as an argument to the function free(3). 

Return Value:
If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
If sufficient memory is available, a pointer to the copy is returned.

Own Words:
We have a string s1.
We want to copy it.
It's only done when enough memory is available.
If sucessful, a pointer points to the copy (beginning of it)

Implementation:
-	A char is created for the copy of s1.
-	A counting variable i is created (and set to 0)
-	length of s1 + 1 is malloced (the +1 for the null determinator)
-	if copy is empty, null is returned
-	iterate through s1 and fill each char in c with the corrospending char in
	s1.
-	append the null determinator
-	return the copy.
-	ERRNO is not implemented, but there are no errors in francinette tests...
*/
char	*ft_strdup(const char *s1)
{
	char	*c;
	int		i;

	i = 0;
	c = malloc(sizeof(char) * ft_strlen(s1) + sizeof(char) * 1);
	if (!c)
		return (NULL);
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}

// int main(void)
// {
// 	const char st[] ="hello world";
// 	printf("%s\n",ft_strdup(st));
// 	printf("%s",strdup(st));
// 	printf("\n");
// }