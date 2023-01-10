/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:12:20 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:12:25 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Returns the last node of the list.

Implementation:
-	Function of data-type t_list is created.
-	first argument is *lst. This is a pointer to the first element in the list.
-	while(lst and the next element are not NULL, the lst-pointer is updated).
-	if lst was empty, lst will be NULL in the end.
-	otherwise, lst will point to the last element of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
