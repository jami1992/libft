/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:01:25 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/13 10:26:26 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// int	main(void)
// {
// 	char	str;

// 	str = 'e';
// 	printf("uppercase of %c is %c\n", str, ft_toupper(str));
// 	printf("uppercase of %c is %c\n", str, toupper(str));
// }
