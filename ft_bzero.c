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
// 	char str3[] = "123456789";
// 	bzero(str3, 4);
// 	int	i;

// 	i = 0;
// 	while(i < 8)
// 	{
// 		printf("%d ", str3[i]);
// 		i++;
// 	}
// 	puts(str3);

// 	// testing own function:
// 	char str4[] = "123456789";
// 	ft_bzero(str4, 4);
// 	int j;

// 	j = 0;
// 	while (j < 8)
// 	{
// 		printf("%d ", str4[j]);
// 		j++;
// 	}
// 	puts(str4);
// }