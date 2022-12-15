/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:18:14 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/15 11:48:49 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int	main(void)
// {
// 	// testing original function:
// 	char s1[] = "abcdefghijklmnopqrstuvwxyz";
// 	char d1[27];
// 	memcpy(d1, s1, sizeof(char) * 27);
// 	printf("d1: %s\n", d1);
// 	char e1[10];
// 	memcpy(e1, s1+8, sizeof(char) * 9);
// 	e1[9] = '\0';
// 	printf("e1: %s\n", e1);

// 	// testing my function:
// 	char s2[] = "abcdefghijklmnopqrstuvwxyz";
// 	char d2[27];
// 	ft_memcpy(d2, s2, sizeof(char) * 27);
// 	printf("d2: %s\n", d2);
// 	char e2[10];
// 	ft_memcpy(e2, s2+8, sizeof(char) * 9);
// 	e2[9] = '\0';
// 	printf("e2: %s\n", e2);
// }