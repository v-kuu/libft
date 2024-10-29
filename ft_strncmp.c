/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:27:46 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 15:40:10 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	index;

	index = 0;
	if (first == 0 && second == 0)
		return (0);
	while ((first[index] != 0 && second[index] != 0) && index < length)
	{
		if (first[index] != second[index])
			return (first[index] - second[index]);
		index++;
	}
	return (0);
}
