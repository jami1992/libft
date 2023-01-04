/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:45:29 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/04 13:20:38 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The strrchr function locates the last occurrence of c (converted to a char) 
in the string pointed to by s. The terminating null character is considered 
to be part of the string.

Return Value:
The strrchr function returns a pointer to the character, or a null pointer 
if c does not occur in the string.

Own words:
We have a string s.
We have a char c.
We want the last occurence of char c in s.
The returned value will point to it (or will be NULL, if c is not in s)

Implementation:
-	first, I copy c to avoid memory leaks and create an empty const char *for
	s, where I will store a pointer to s, if c is found.
-	then, I need to fake an empty for()-conditional. I do it with a statement,
	that will always be true: 42.
-	then, if the pointer to s is the same as c, s_copy will point to s.
-	if s points to a null determinator, then s_copy is casted to char pointer
	and returned.
- 	otherwise, s is increased and now comes the beauty: the loop just continues
	and tries to find the next occurence of c. This is repeated as long as
	*s does not point to the null determinator. That's why I need a loop that
	does always evaluate to TRUE.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	c_copy = c;
	const char	*s_copy = NULL;

	while (42)
	{
		if (*s == c_copy)
			s_copy = s;
		if (*s == '\0')
			return ((char *) s_copy);
		s++;
	}
	return (0);
}

// int	main(void)
// {
// 	char tweet[] = "this is my @menti@n";
// 	char *mention1 = strrchr(tweet, '@');
// 	char *mention2 = ft_strrchr(tweet, '@');

// 	// /* returns a pointer to the position of @ so it 
// 	// returns a substring */
// 	printf("original from mention \t\t\t%s\n", mention1);
// 	printf("my own from mention \t\t\t%s\n\n", mention2);

// 	printf("addr of orig. mention \t\t\t%p\n", mention1);
// 	printf("addr of orig. mention \t\t\t%p\n\n", tweet + 17);

// 	printf("addr of my mention \t\t\t%p\n", mention2);
// 	printf("addr of my mention \t\t\t%p\n\n", tweet + 17);
// 	// mention[0] = '+'; /*changes here change the original string, because 
// 	// we are working with pointers!*/
// 	// /*if the substring is not found in the string, NULL is returned:*/
// 	if(strrchr(tweet, '#') == NULL)
// 		printf("original strchr returned\t\tNULL\n");
// 	if(ft_strrchr(tweet, '#') == NULL)
// 		printf("my own strchr returned\t\t\tNULL\n\n");
// 	printf("address with original:\t\t\t%p\n", strrchr(tweet, '@'));
// 	printf("address with myown:\t\t\t%p\n\n", ft_strrchr(tweet, '@'));

// 	printf("addr of nulldeterm with original: \t%p\n", strrchr(tweet, '\0'));
// 	printf("addr of nulldeterm with my own: \t%p\n", ft_strrchr(tweet, '\0'));

// 	return (0);
// }
