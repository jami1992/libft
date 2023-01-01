/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:36:12 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/27 22:12:02 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

/*
Description: 
The strchr function locates the first occurrence of c 
(converted to a char) in the string pointed to by s. The terminating null 
character is considered to be part of the string.

Return Value:
The strchr function returns a pointer to the located character, 
or a null pointer if the character does not occur in the string.

Own words: 
We have a string s. We havea char c.
The strchr returns a pointer to the first occurence of c in s.
If there is no c in s, the return value is null.
If c is in s, the return value is a pointer to the located character.

Implementation:
- 	first I copy c to c_copy, to avoid memory leaks.
- 	then I iterate the pointer through s. 
	+	If the pointer points to the null determinator, I return 0.
		This is finally the case if c is not in s.
	+	If c is in s the while loop stops. Then s is casted to char
		pointer and returned.
*/

char	*ft_strchr(const char *s, int c)
{
	const char	c_copy = c;

	while (*s != c_copy)
	{
		if (*s == '\0')
			return (0);
	s++;
	}
	return ((char *)s);
}

// int main(void)
// {
// 	char tweet[] = "this is my @mention";
// 	char *mention1 = strchr(tweet, '@');
// 	char *mention2 = ft_strchr(tweet, '@');

// 	// /* returns a pointer to the position of @ so it 
// 	// returns a substring */
// 	printf("original from mention \t%s\n", mention1);
// 	printf("my own from mention \t%s\n", mention2);
// 	printf("addr of orig. mention %p\n", mention1);
// 	printf("addr of orig. mention %p\n", tweet +11);
// 	printf("addr of my mention %p\n", mention2);
// 	printf("addr of my mention %p\n", tweet + 11);
// 	// mention[0] = '+'; /*changes here change the original string, because 
// 	// we are working with pointers!*/
// 	// /*if the substring is not found in the string, NULL is returned:*/
// 	if(strchr(tweet, '#') == NULL)
// 		printf("original strchr returned\tNULL\n");
// 	if(ft_strchr(tweet, '#') == NULL)
// 		printf("my own strchr returned\t\tNULL\n");
// 	printf("address with original:\t%p\n", strchr(tweet, '@'));
// 	printf("address with myown:\t%p\n", ft_strchr(tweet, '@'));

// 	printf("addr of nulldeterm with original: \t%p\n", strchr(tweet, '\0'));
// 	printf("addr of nulldeterm with my own: \t%p\n", ft_strchr(tweet, '\0'));
// 	return (0);
// }
