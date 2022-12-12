/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:17:03 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/12 18:26:26 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int str)
{
	if (((str >= 'a') && (str <= 'z')) || ((str >= 'A') && (str <= 'Z'))
		|| ((str >= '0') && (str <= '9')))
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

	str = '8';
	printf("return value is %d\n", ft_isalnum(str));
	printf("return value is %d\n", isalnum(str));
}
