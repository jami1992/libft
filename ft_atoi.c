/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:20:12 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/14 19:29:37 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// find help here :https://www.geeksforgeeks.org/write-your-own-atoi/
// BUT: Add handling of multiple non-numeric signs (e.g. -- etc.)
int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

// int	main()
// {
//         char str1[] = "-123";
//         char str2[] = "-123";

//         printf("orig Atoi %d\n", atoi(str1));
//         printf("my Atoi %d\n", ft_atoi(str2));
// }