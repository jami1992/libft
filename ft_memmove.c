/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:49:52 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/15 13:33:55 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// THIS IS NOT WORKING!
// #include <stdio.h>
// #include <string.h>
#include <stddef.h>

// void    *ft_memcpy(void *restrict dst, void *restrict src, size_t n)
// {
//         size_t  i;
//         char    *d;
//         char    *s;

//         i = 0;
//         d = dst;
//         s = src;
// 	// the normal memcpy stuff:
// 	while (i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (d);
// }
/*
https://stackoverflow.com/questions/4023320/how-to-implement-memmove-in-
standard-c-without-an-intermediate-copy
*/
void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	size_t	j;
	char *d;
	char *s;
	char *temp[len];

	j = 0;
	i = 0;
	d = dst;
	s = src;

	while(i < len)
	{
		temp[i] = &s[i];
		i++;
	}
	while(j < len)
	{
		d[i] = *temp[i];
		j++;
	}
	return(d);
	}


// int	main ()
// {
// 	char	str1[50] = "This is a string that works totally fine";
// 	char	str2[50] = "This is a string that works totally fine";

// 	printf( "Function:\tmemmove with overlap\n" );
//     printf( "Orignal :\t%s\n",str1);
//     printf( "Source:\t\t%s\n", str1 + 5 );
//     printf( "Destination:\t%s\n", str1 + 11 );
//     memmove( str1 + 11, str1 + 5, 29 );
//     printf( "Result:\t\t%s\n", str1 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );

//     //Use of memcpy
//     printf( "Function:\tmemcpy with overlap\n" );
//     printf( "Orignal :\t%s\n",str2);
//     printf( "Source:\t\t%s\n", str2 + 5 );
//     printf( "Destination:\t%s\n", str2 + 11 );
//     memcpy( str2 + 11, str2 + 5, 29 );
//     printf( "Result:\t\t%s\n", str2 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str2 ) );

// 	char	str3[50] = "This is a s#ring that works totally fine";
// 	char	str4[50] = "This is a string that works totally fine";
	
// 	//using my own memmove
// 	printf( "Function:\town memmove with overlap\n" );
//     printf( "Orignal :\t%s\n",str3);
//     printf( "Source:\t\t%s\n", str3 + 5 );
//     printf( "Destination:\t%s\n", str3 + 11 );
//     ft_memmove( str3 + 11, str3 + 5, 29 );
//     printf( "Result:\t\t%s\n", str3 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str3 ) );

//     //Use of my own memcpy
//     printf( "Function:\town memcpy with overlap\n" );
//     printf( "Orignal :\t%s\n",str4);
//     printf( "Source:\t\t%s\n", str4 + 5 );
//     printf( "Destination:\t%s\n", str4 + 11 );
//     ft_memcpy( str4 + 11, str4 + 5, 29 );
//     printf( "Result:\t\t%s\n", str4 );
//     printf( "Length:\t\t%lu characters\n\n", strlen( str4 ) );

//     return 0;
// }
