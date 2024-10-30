/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:56 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 12:01:45 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t		length;
	const char	*reader;

	reader = source;
	length = 0;
	while (reader)
	{
		reader++;
		length++;
	}
	while (size > 0)
	{
		*destination = *source;
		size--;
	}
	*destination = 0;
	return (length);
}
