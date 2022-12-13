/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:14:29 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/13 19:46:51 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char			*s1 = "This";
// 	char			*s2 = "This is a string";
// 	unsigned long	n;

// 	n = 3;
// 	if (strncmp(s1, s2, n) == 0)
// 		printf("strings are equal\n");
// 	else if (strncmp(s1, s2, n) > 0)
// 		printf("s1 > s2\n");
// 	else if (strncmp(s1, s2, n) < 0)
// 		printf("s2 > s1\n");
// 	if (ft_strncmp(s1, s2, n) == 0)
// 		printf("strings are equal\n");
// 	else if (ft_strncmp(s1, s2, n) > 0)
// 		printf("s1 > s2\n");
// 	else if (ft_strncmp(s1, s2, n) < 0)
// 		printf("s2 > s1\n");
// }
