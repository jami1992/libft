/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:51:07 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/12 18:22:24 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int str)
{
	if (((str >= 'a') && (str <= 'z')) || ((str >= 'A') && (str <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	int	str6;

// 	str6 = '9';
// 	printf("return value is %d\n", ft_isalpha(str6));
// 	printf("return value is %d\n", isalpha(str6));
// }
