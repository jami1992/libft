/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:10:52 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/14 20:37:02 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include <stddef.h>

void	*ft_memset(char *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b == 0)
		return (0);
	while (i < len)
	{
		*(unsigned char *)(b) = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char buffer[2];
// 	printf("original\t%s\n", memset(buffer, 'a', 1));
// 	printf("own\t\t%s\n", ft_memset(buffer, 'a', 1));
// }
