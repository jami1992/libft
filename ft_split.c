/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:28:06 by jdruba            #+#    #+#             */
/*   Updated: 2022/12/29 18:24:19 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

static int ft_strlen(const char *c)
{
	int i;
	i = 0;
	while (c[i])
	{
		i++;
	}
	return(i);
}

int ft_strlen_del(char const *s, char c, int i)
{
	int j;
	j = i; // to store the old i
	while (s[i] != c && s[i] != '\0')
	{
		i--;
	}
	return (j - i);
}

static unsigned int ft_count_substrings(const char *s, char c)
{
	int i;
	int number_of_substrings;

	number_of_substrings = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			number_of_substrings++;
		if(s[i] == c && s[i + 1] == c) // cover multiple delim.
			number_of_substrings--;
		i++;
	}
	return (number_of_substrings);
}

char **ft_split(char const *s, char c)
{
	//first: count occurences of delimiter to know how many strings are needed.
	int	i; // i will be the length of s
	int substr_l;
	int	number_of_substrings; // this will be the number of substrings
	char **arr; // this is the array in which I will store the substrings

	number_of_substrings = 1; // has to be one because there is at least one substring.
	substr_l = 0; // substr_l will be the counter that counts until each delimiter
	number_of_substrings = ft_count_substrings(s, c);

	// first I have to allocate enough memory for the number of pointers (substrings),
	// I will have. Then I add one to store the null determinator
	arr = malloc((number_of_substrings) * sizeof(char*));
	//for (int i = 0; i < variableNumberOfElements; i++)
    //orderedIds[i] = malloc((ID_LEN+1) * sizeof(char)); // yeah, I know s
	//*arr[number_of_substrings] = '\0'; // The array must end with a NULL pointer.
	// arr[number_of_substrings] = malloc(sizeof(char*)); // malloc memory for each substring . begin at the end.
	// arr[number_of_substrings][0] = '\0';
		i = ft_strlen(s) - 1; 
	while (number_of_substrings > 0)
	{
		while (s[i] == c)
			i--;
		substr_l = ft_strlen_del(s,c, i);
		//printf("substring length:%d\n", substr_l);
		number_of_substrings--;
		arr[number_of_substrings] = malloc(substr_l * sizeof(char)); // malloc memory for each substring . begin at the end.
		
		// finally fill the array....
		while(substr_l > 0)
		{
			arr[number_of_substrings][substr_l -1] = s[i];
			substr_l--;
			i--;
		}
		printf("result: %s\n", arr[number_of_substrings]);
	}
	return(arr);
}

// int	main(void)
// {
// 	ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// }