/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:08:28 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 16:19:55 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t length)
{
	char		*writer;
	const char	*reader;
	size_t		index;

	if (!destination || !source)
		return (0);
	writer = destination;
	reader = source;
	index = 0;
	while (index < length)
	{
		writer[index] = reader[index];
		index++;
	}
	return (destination);
}
