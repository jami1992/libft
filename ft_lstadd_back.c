/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:21:42 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:13:02 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Description:
Adds the node ’new’ at the end of the list.

Implementation:
-	Function gets two arguments: Pointer to Pointer of the first element of
	the list and a pointer to the node, that should be added to the list.
	The Node "new" will be added to the end of the list.
-	First we check, if the list is empty. If so, the pointer lst is set
	to the new entry.
-	Otherwise, (if list is not empty) the lstlast function is called to 
	get a pointer to the last element of the list.
-	finally, the next-pointer of the last element of the "old" list is
	set to point to the new element. That adds the new node to the end
	of the "old" list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast (*lst);
	last->next = new;
}
