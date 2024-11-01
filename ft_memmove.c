/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:21:00 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 16:40:13 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memmove(void *destination, const void *source, size_t length)
{
	char		*writer;
	const char	*reader;

	if (destination < source)
	{
		writer = destination;
		reader = source;
		while (length > 0)
		{
			*writer++ = *reader++;
			length--;
		}
	}
	else
	{
		writer = destination + (length - 1);
		reader = source + (length - 1);
		while (length > 0)
		{
			*writer-- = *reader--;
			length--;
		}
	}
	return (destination);
}
