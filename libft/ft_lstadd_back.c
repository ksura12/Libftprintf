/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:59:22 by ksura             #+#    #+#             */
/*   Updated: 2022/05/13 13:27:51 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION
Adds the node ’new’ at the end of the list.

RETURN
-

PARAMETERS
lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.

EXTERNAL FUNCTIONS
-
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
