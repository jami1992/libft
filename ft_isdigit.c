/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:38:23 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/12 18:23:00 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int str)
{
	if ((str >= '0') && (str <= '9'))
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
// 	int	str;

// 	str = '#';
// 	printf("return value is %d\n", ft_isdigit(str));
// 	printf("return value is %d\n", isdigit(str));
// }
