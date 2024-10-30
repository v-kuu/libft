/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:22:03 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 13:32:59 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memchr(const void *source, int character, size_t length)
{
	unsigned char	*finder;
	unsigned char	needle;

	finder = (unsigned char *)source;
	needle = character;
	while (*finder != needle && length > 0)
	{
		finder++;
		length--;
	}
	return (finder);
}
