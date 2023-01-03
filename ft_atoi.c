/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:20:12 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 13:00:49 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"
/*
Description:
The atoi() function converts the initial portion of the string pointed
to by str to int representation.

Return:
int representation of initial ASCII.

Implementation:
-	create and initialize variables for the result, the sign and a
	index variable to iterate through the string (later).
-	just iterate without doing anything, as long as there are only
	whitespaces / tabs (while loop that compares for 32 etc).
		if a plus or minus sign is not in the beginning, return 0.
-	set minus sign variable to minus 1 if there is a minus sign
	(without whitespaces).
-	in case of a plus or minus sign in the beginning: increment index
	from 0 to 1 (=second position in string)
-	while null-determ is not reached iterate through string.
		if char out of int range, break
	result is ten times the result (because we are in
	decimal / base10 number system). res. stores the "old"
	result from the previous iteration (or 0 in first iteration)
-	finally return -1*result or 1*result (depending on the sign).

Resources:
found help here :https://www.geeksforgeeks.org/write-your-own-atoi/
BUT: Added handling of multiple non-numeric signs (e.g. -- etc.)
AND: Added handling of non-numeric signs in the end and in between.
*/

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		if (i >= 1 && (str[i - 1] == '-' || str[i - 1] == '+'))
			return (0);
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == 43 || str[i] == '-')
		i++;
	while (str[i])
	{
		if ((str[i] < 48 || str[i] > 57))
			break ;
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

// int	main()
// {
//         char str1[] = "\t\v\f\r\n \f-06050";
//         char str2[] = "\t\v\f\r\n \f-06050";

//         printf("orig Atoi %d\n", atoi(str1));
//         printf("my Atoi %d\n", ft_atoi(str2));
// }