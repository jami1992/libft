/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 06:51:55 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:15:49 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Iterates the list ’lst’ and applies the function ’f’ on the content of 
each node. Creates a new list resulting of the successive applications of
the function ’f’. The ’del’ function is used to delete the content of 
a node if needed.

Implementation:
-	a new list is created.
-	a temporary list (curr) is created.
-	newlist is set to NULL.
-	if lst or f are empty (NULL), NULL is returned.
-	we iterate through the list lst.
-	if current is empty (if we shot above our goal), everything from there
	is deleted.
-	a new node is created and saved in curr.

*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*curr;

	newlist = NULL;
	if (!(lst || f))
		return (0);
	while (lst)
	{
		curr = ft_lstnew(f(lst->content));
		if (!curr)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, curr);
		lst = lst->next;
	}
	return (newlist);
}
