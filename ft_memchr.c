/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:04:39 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/13 19:48:53 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(char *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*s != c && i < n)
	{
		i++;
		s++;
	}
	if (i >= n)
		return (NULL);
	return (s);
}

// int	main(void)
// {
// 	char data[] = {'q', 'r', 's', 't', 'u', 'v', 'w', 'x'};
// 	int depth;

// 	depth = 4;
// 	char *pos = memchr(data, 't', depth);
// 	if(pos == NULL)
// 	{
// 		printf("orig: char not found\n");
// 	}
// 	else
// 	{
// 		printf("orig pos[0] = %c\n", pos[0]);
// 		printf("orig pos[1] = %c\n", pos[1]);
// 		printf("orig addr %p\n", pos);
// 	}
// 	char *pos2 = ft_memchr(data, 't', depth);
// 	if(pos2 == NULL)
// 	{
// 		printf("own: char not found\n");
// 	}
// 	else
// 	{
// 		printf("own pos[0] = %c\n", pos2[0]);
// 		printf("own pos[1] = %c\n", pos2[1]);
// 		printf("own addr %p\n", pos2);
// 	}
// 	return (0);
// }