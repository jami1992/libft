/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:42:57 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 15:39:10 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include "libft.h"

/*
Description:
The strlen function computes the length of the string pointed to by s.

Returns:
The strlen function returns the number of characters that precede the 
terminating null character.

Implementation:
-	create counter variable i
-	iterate through the string until the null determinator is reached.
	increment i with each iteration by 1.
-	return the final value i;
*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "hello world!";

// 	printf("String has length %zu\n", ft_strlen(str));
// 	printf("String has length %zu\n", strlen(str));
// }
