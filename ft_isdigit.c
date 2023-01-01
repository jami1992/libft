/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:38:23 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 18:22:22 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

// one-liner (norme violation)
// int	ft_isdigit(int c)
// {
// 	return (c >= '0' && c <= '9');
// }

/*
Description:
The isdigit function tests for any decimal-digit character.

Return Value:
non-zero for digits and zero for non-digits.

Own words:
function is already described in the most easy way.

Implementation:
-	In cases where c is at least 0 and at most 9, one is returned.
-	otherwise zero is returned.
*/

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	str;

// 	str = '#';
// 	printf("return value is %d\n", ft_isdigit(str));
// 	printf("return value is %d\n", isdigit(str));
// }
