/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:27:23 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 13:04:46 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"
/*
Description:
The tolower function converts an uppercase letter to a corresponding lowercase
letter.

Implementation:
-	shifting each char between A & Z (uppercase) by adding 32.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int	main(void)
// {
// 	char	str;

// 	str = 'Z';
// 	printf("lowercase of %c is %c\n", str, ft_tolower(str));
// 	printf("lowercase of %c is %c\n", str, tolower(str));
// }
