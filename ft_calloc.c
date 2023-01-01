/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:41:01 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/30 17:06:32 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
The calloc function allocates space for an array of nmemb objects, each of 
whose size is size. The space is initialized to all bits zero.

Return Value:
The calloc function returns either a null pointer or a pointer to the 
allocated space.

Own Words (less precise):
We tell the calloc function how much space we need and it reserves
us the necessary amount of space, nulled. A Pointer will show
to the allocated space.

Implementation:
-	a void pointer is created. It will point to the allocated memory, later.
-	count variable of type size_t is created (as comparisons with count and
	size will not be able with int without casting)
-	malloc enough space for the array by multiplying count by size.
-	fill the array with \0, by iterating through it.
-	return the array.
*/

// working with bzero would also work (but would be less readable)
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;
	char	*c;

	i = 0;
	p = malloc(count * size);
	c = p;
	if (p)
	{	
		while (i < count * size)
		{
			c[i] = '\0';
			i++;
		}
	}
	return (p);
}

// int	main()
// {
// 	ft_calloc(4, sizeof(int));
// }
