/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:38:35 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/15 10:50:55 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

/*
Thanks to this post, I found out, that you have to work with an extra variable
you can not work directly with void *s
https://stackoverflow.com/questions/29182966/do-you-have-a-simple-bzero-example
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

/* for testing: a normal printf statement does not work, as bzero fills with
NULL-Determinators.
*/
// int	main(void)
// {
// 	// original function:
// 	char str1[] = "123456789";
// 	bzero(str1, 4);
// 	int	i;

// 	i = 0;
// 	while(i < 8)
// 	{
// 		printf("%d ", str1[i]);
// 		i++;
// 	}
// 	puts(str1);

// 	// testing own function:
// 	char str2[] = "123456789";
// 	ft_bzero(str2, 4);
// 	int j;

// 	j = 0;
// 	while (j < 8)
// 	{
// 		printf("%d ", str2[j]);
// 		j++;
// 	}
// 	puts(str2);
// }