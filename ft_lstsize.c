/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jan <jan@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:09:25 by jan               #+#    #+#             */
/*   Updated: 2023/01/10 09:11:54 by jan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Description:
Counts the number of nodes in a list.

Implementtion:
-	counter is set to 0
-	while lst != '\0' counter is incremented.
-	the pointer lst goes to the next element of the linked list.
-	counter is returned.
*/
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst && ++count)
		lst = lst -> next;
	return (count);
}
