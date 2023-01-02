/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:41:40 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/02 17:16:20 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The itoa() function coverts the integer n into a character string. The string 
is placed in the buffer passed, which must be large enough to hold the output.

Return:
The ASCII-String.

Own words:
A number is should be converted to a string.

Implementation:
-	Variables for the length of the integer, a counter, a pointer
	variable for the ASCII-String and a variable for the sign of the
	INT are created (sign variable plays a role in malloccing and
	determines if a minus sign will be added to the string)
-	In case of MIN-INT strdup is used to allocate the memory and to
	return MIN-INT as String.
-	in case of a negative sign, the variable sign gets the value 1 and
	the integer is multiplicated  with -1.
-	function intlen determines and returns the length of the positive
	int. If sign is 1, one is added to get the length of the char,
	that has to be malloced.
-	malloc enough space for the char.
-	iterate through the integer and fill *c sign by sign with
	numbers.
-	finally: reorder.
	(there might be an easier way by iterating backwards throug the int)

Resources:
stackoverflow.com/questions/3068397/finding-the-length-of-an-integer-in-c
*/
static int	ft_intlen(int x)
{
	if (x >= 1000000000)
		return (10);
	if (x >= 100000000)
		return (9);
	if (x >= 10000000)
		return (8);
	if (x >= 1000000)
		return (7);
	if (x >= 100000)
		return (6);
	if (x >= 10000)
		return (5);
	if (x >= 1000)
		return (4);
	if (x >= 100)
		return (3);
	if (x >= 10)
		return (2);
	return (1);
}

static char	*ft_reorder(char *c, int sign)
{
	int		i;
	int		clen;
	char	temp1;
	char	temp2;

	i = 0;
	clen = ft_strlen(c);
	while (i < (clen / 2))
	{
		temp1 = c[clen - 1 - i];
		temp2 = c[i];
		c[i] = temp1;
		c[clen - 1 - i] = temp2;
		i++;
	}
	if (sign == 1)
		c[0] = '-';
	return (c);
}

/*
charlen = digits + sign + 1: // +1 for null determ.
*/
char	*ft_itoa(int n)
{
	int		charlen;
	int		i;
	int		sign;
	char	*c;

	sign = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		sign = 1;
	if (n < 0)
		n = n * -1;
	charlen = ft_intlen(n) + sign + 1;
	c = malloc (charlen);
	if (!c)
		return (0);
	c[charlen - 1] = '\0';
	while (i < charlen - 1)
	{
		c[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	return (ft_reorder(c, sign));
}

// int	main(void)
// {
// 	printf("the return value is: %s\n", ft_itoa(-2147483648));
// }
