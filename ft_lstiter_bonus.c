/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:56:49 by vkuusela          #+#    #+#             */
/*   Updated: 2024/11/06 13:05:03 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*func)(void *))
{
	t_list	*temp;

	if (!list || !func)
		return ;
	temp = list;
	while (temp != 0)
	{
		func(temp->content);
		temp = temp->next;
	}
}
