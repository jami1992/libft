/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:49:02 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:13:40 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Takes as a parameter a node and frees the memory of the node’s content using
the function ’del’ given as a parameter and free the node. The memory of
’next’ must not be freed.

Implementation:
-	Check, if lst or del is NULL. If so nothing is done.
-	Otherwise, the del function is called, passing content. This deletes the
	content of the node (the del function has to be written seperately).
-	finally, the memory of the node is freed with the free function.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
