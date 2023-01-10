/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:26:13 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:15:00 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description:
Iterates the list ’lst’ and applies the function ’f’ on the content of each
node.

Implementation:
-	function gets two arguments:
	1. a pointer to the first element in the list (lst)
	2. a pointer to the function f (this function will iterate over the list)
-	f will be applied to each node in the list.
-	first we check, if lst or f are empty. If so, return without doing
	anything else.
-	then while lst is not NULL, the function f is called, "content" of the 
	current node is passed. 
-	finally the lst-pointer is updated to point to the next node in the list.
	The loop continues until lst is NULL (=end of the list)
*/
void	ft_lstiter(t_list *lst, void (f)(void *))
{
	if (!(lst || f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
