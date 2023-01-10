/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:03:15 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:14:25 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Deletes and frees the given node and every successor of that node, using 
the function ’del’ and free(3). Finally, the pointer to the list must be set to
NULL.

Implementation:
-	instances of t_list for the current and the next element are created.
-	if lst or del or *lst are NULL, nothing is done.
-	otherwise, the pointer **lst (provided as argument) is set to the current
-	node. We have to use the workaround with this *current-node to make sure we
	have a reference to continue, after we deleted the current node.
-	we use lstdelone to delete the current node and iterate (set next node to
	current).
-	finally, the pointer to the list is set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!(lst || del || *lst))
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
