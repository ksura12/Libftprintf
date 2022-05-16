/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:19 by ksura             #+#    #+#             */
/*   Updated: 2022/05/13 13:28:09 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION
Iterates the list ’lst’ and applies the function
’f’ on the content of each node.

RETURN
-

PARAMETERS
lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.

EXTERNAL FUNCTIONS
-
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
