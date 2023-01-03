/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdruba <jdruba@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 11:29:58 by jdruba            #+#    #+#             */
/*   Updated: 2023/01/03 17:00:14 by jdruba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description:
Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument.  Each character is passed by address 
to ’f’ to be modified if necessary.

Return value:
none, as function is of type void.

Own words (less precise):
We have a string.
We have a number.
The number is the index.
We build a function f.
We apply whatever is defined in f to every char of the string.
We do so by iterating through the stringö

Implementation:
-	first I created the function f that was to be called. This function 
	is not to be submitted, but it helped to understand the task.
-	The function f switches uppercase and lowercase.
-	within the function striteri, I created a counter variable i
	which was passed as index variable to the function f, later.
-	if(s)-Statement protects me from unwanted behaviour in case of
	having a null pointer. In Case of a null-pointer the function
	does nothing.
-	takes the address of each character of the string, and pass it into 
	the function f.
-	I iterate through the string s and apply the function f for each
	index i.

Sources:
I used https://jraleman.medium.com/c-programming-language-passing-a-
function-as-a-parameter-90d52fe842ea
to find out, how to solve this task.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// char f (unsigned int i, char c)
// {
// 	i = 0;
// 	return (toupper(c + i));
// }
// int main ()
// {
// 	char const *hw = "hello world";
// 	printf("%s",ft_strmapi(hw ,f));
// }