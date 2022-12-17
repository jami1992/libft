/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:00:21 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/14 12:17:53 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>

/*https://stackoverflow.com/questions/18853054/building-memcmp-function-in-c
*/
int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = s1;
	q = s2;
	while (n > 0)
	{
		if (n > 0)
		{
			if (*p != *q)
			{
				return (*p - *q);
			}
			n--;
			p++;
			q++;
		}
	}
	return (0);
}

// int	main()
// {
// 	int ret1 = 0;
// 	int ret2 = 0;
// 	int len = 1;
// 	char s1[] = "\0-";
// 	char s2[] = "\0";

// 	//int s1[] = {6, 2, 3};
// 	//int s2[] = {1, 2, 3, 4};

// 	ret1 = memcmp(s1, s2, len);
// 	if(ret1 > 0)
// 	{
// 		printf("original:\ts2 is less than s1\n");
// 	}
// 	else if (ret1 < 0)
// 	{
// 		printf("original:\ts1 is less than s2\n");
// 	}
// 	else
// 	{
// 		printf("original:\ts1 is equal to s2\n");
// 	}

// 	ret2 = ft_memcmp(s1, s2, len);
// 	if(ret2 > 0)
// 	{
// 		printf("own:\t\ts2 is less than s1\n");
// 	}
// 	else if (ret2 < 0)
// 	{
// 		printf("own:\t\ts1 is less than s2\n");
// 	}
// 	else
// 	{
// 		printf("own:\t\ts1 is equal to s2\n");
// 	}
// 	return (0);
// 	}
