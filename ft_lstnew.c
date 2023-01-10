/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:30:40 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 08:33:41 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description of ft_lstnew():
Allocates (with malloc(3)) and returns a new node. The member variable 
’content’ is initialized with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL.

Implementation:
-	a function of the datatype t_list, defined in libft.h as a structure is 
	created.
-	an instance of t_list is initialized. It is named element1
-	sufficient memory is allocated to element1
-	element1 is protected.
-	content of instance element1 gets the content, passed by the function 
	ft_lstnew
-	next-variable of instance element1 points to NULL-Determinator.
-	element 1 is returned
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*element1;

	element1 = (t_list *)malloc(sizeof(t_list));
	if (!element1)
		return (0);
	element1->content = content;
	element1->next = NULL;
	return (element1);
}
