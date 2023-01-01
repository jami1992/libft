/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:17:03 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 18:22:09 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

/* 
This is a one-liner. They are forbidden by norme. 
The return statement works like an if-statement. If the value is a letter 
(ft_isalpha checks for this case) or a number (ft_isdigit checks
for this case) one is returned.

int	ft_isalnum(int str)
{
	return (ft_isalpha(str) || ft_isdigit(str));
}
*/

/*
Description:
The isalnum function tests for any character for which isalpha or isdigit is t
rue.

Return Value:
return nonzero (true) if and only if isalpha or isdigit is true.

Own words:
we pass an integer c. The function returns a positive number, if c is 
alphanumeric

Implementation:
-	if the function isalpha or isdigit return a positive value, this function
	returns one. Otherwise zero is returned.
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	str;

// 	str = '8';
// 	printf("return value is %d\n", ft_isalnum(str));
// 	printf("return value is %d\n", isalnum(str));
// }
