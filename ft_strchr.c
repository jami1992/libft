/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:36:12 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/13 13:44:15 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	while (*s != c)
	{
		s++;
		if (*s == '\0' && c != '\0')
			return (NULL);
		if (*s == '\0' && c == '\0')
			return (s);
	}
	return (s);
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
