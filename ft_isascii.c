/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:40:07 by jan-michael       #+#    #+#             */
/*   Updated: 2022/12/29 18:21:56 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

/*
Description:
The isascii() function tests for an ASCII character, which is any character 
between 0 and 127 inclusive.

Return Value:
non-zero, if true; zero if false.

Implementation:
-	check if c is in range of 0 to 127.
-	if so: return one. Otherwise return zero.
*/

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	str;

// 	str = '8k \n';
// 	printf("return value is %d\n", ft_isascii(str));
// 	printf("return value is %d\n", isascii(str));
// }
