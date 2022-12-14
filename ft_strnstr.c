/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:37:37 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/14 17:20:28 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	int		j;
	size_t	lc;

	lc = 0;
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0' && lc < len)
	{
		if (*haystack == *needle)
		{
			j = 0;
			while (*needle != '\0')
			{
				if (*haystack != *needle)
					j = 1;
				needle++;
			}
			if (j == 0)
				return (haystack);
		}
		haystack++;
		lc++;
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack1[] = "123456789";
// 	char needle1[] = "";
// 	char haystack2[] = "123456789";
// 	char needle2[] = "";
// 	int length = 8;

// 	printf("original:\t%s\n", strnstr(haystack1, needle1, length));
// 	printf("own:\t\t%s\n", ft_strnstr(haystack2, needle2, length));
// 	return (0);
// }