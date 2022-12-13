/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:30:16 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/13 09:44:18 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int str)
{
	if ((str >= 32) && (str <= 126))
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

	str = ' ';
	printf("return value is %d\n", ft_isprint(str));
	printf("return value is %d\n", isprint(str));
}
