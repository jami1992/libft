/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:20:12 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/15 16:24:04 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// found help here :https://www.geeksforgeeks.org/write-your-own-atoi/
// BUT: Added handling of multiple non-numeric signs (e.g. -- etc.)
// AND: Added handling of non-numeric signs in the end and in between.

// MY ATOI DOES NOT HANDLE NUMBERS FIRST AND LETTERS LATER!
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
		if ((str[i] < 48 || str[i] > 57))
			break ;
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

int	main()
{
        char str1[] = "123ab";
        char str2[] = "123ab";

        printf("orig Atoi %d\n", atoi(str1));
        printf("my Atoi %d\n", ft_atoi(str2));
}