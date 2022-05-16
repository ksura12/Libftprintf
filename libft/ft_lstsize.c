/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:02:39 by ksura             #+#    #+#             */
/*   Updated: 2022/05/13 13:28:25 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
DESCRIPTION
Counts the number of nodes in a list.

RETURN
The length of the list

PARAMETERS
lst: The beginning of the list.

EXTERNAL FUNCTIONS
-
*/
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	if (lst == NULL)
		return (0);
	else
	{
		temp = lst;
		count = 1;
		while (temp->next != NULL)
		{
			temp = temp->next;
			count++;
		}
		return (count);
	}
}