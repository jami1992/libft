/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:51:07 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 18:21:26 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Task can be solved with a one-liner, but this would be a violation of the
// norme!
// int	ft_isalpha(int c)
// {
// 	return ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'));
// }

/*
Description:
The isalpha function tests for any character for which isupper or islower is 
true, or any character that is one of a locale-specific set of alphabetic 
characters for which none of iscntrl, isdigit, ispunct, or isspace is true.

Return Value:
In the "C" locale, isalpha returns true only for the characters for which 
isupper or islower is true.

Own words:
isalpha() checks, if a char c is from the alphabet (upper or lowercase).
If so, it returns 1. Otherwise 0.

Implementation:
-	first I check, if c is between a and z (lowercase) OR 
	if c is between A and Z (uppercase).
-	If one of both is true, 1 is returned.
-	Otherwise 0 is returned.
*/

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	str6;

// 	str6 = '9';
// 	printf("return value is %d\n", ft_isalpha(str6));
// 	printf("return value is %d\n", isalpha(str6));
// }
