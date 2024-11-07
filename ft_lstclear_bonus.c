/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:56:07 by vkuusela          #+#    #+#             */
/*   Updated: 2024/11/06 15:10:53 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*delete)(void *))
{
	t_list	*temp;

	if (!list || !delete)
		return ;
	while (*list != 0)
	{
		temp = (*list)->next;
		ft_lstdelone(*list, delete);
		*list = temp;
	}
	free(*list);
	*list = 0;
}
