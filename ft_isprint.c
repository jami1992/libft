/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:30:16 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 19:43:07 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

// it is possible to work without if else statements, here. But this is a
// norme violation:
// int	ft_isprint(int str)
// {
// 	return (str > 31 && str < 127);
// }

/*
Description:
The isprint function tests for any printing character including space (' ').

Return Value:
return nonzero (true) if and only if the value of the argument c is printable.

Implementation:
-	check if char is between 32 and 126 (each included). If so: return 1
	otherwise: return 0.
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	str;

// 	str = ' ';
// 	printf("return value is %d\n", ft_isprint(str));
// 	printf("return value is %d\n", isprint(str));
// }
