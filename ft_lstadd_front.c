/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:59:16 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 08:37:56 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
-	Adds the node ’new’ at the beginning of the list

Implementation:
-	Function arguments: a pointer to the pointer of the first element in the
	list(lst) and a pointer to the node to be added to the list (new). 
-	It sets the next pointer of the new node to point to the current first 
	element in the list, and then updates the lst pointer to point to the 
	new node, making it the new first element in the list.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
