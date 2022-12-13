/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan-michaeldruba <jan-michaeldruba@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:40:07 by jan-michael       #+#    #+#             */
/*   Updated: 2022/12/12 21:50:08 by jan-michael      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int str)
{
	if ((str >= 0) && (str <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	int	str;

	str = '8k \n';
	printf("return value is %d\n", ft_isascii(str));
	printf("return value is %d\n", isascii(str));
}
