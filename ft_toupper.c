/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:01:25 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 13:10:20 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"
/*
Description:
The toupper function converts a lowercase letter to a corresponding
uppercase letter.

Implementation:
-	Shifting each ascii between a & z (lowercase) by 32.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int	main(void)
// {
// 	char	str;

// 	str = 'e';
// 	printf("uppercase of %c is %c\n", str, ft_toupper(str));
// 	printf("uppercase of %c is %c\n", str, toupper(str));
// }
