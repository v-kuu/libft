/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:03:51 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 13:21:08 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	length;
	char	*writer;

	length = ft_strlen(destination) + ft_strlen(source);
	writer = destination + ft_strlen(destination) - 1;
	while (source && (size - ft_strlen(destination) - 1) > 0)
	{
		*writer++ = *source++;
		size--;
	}
	*writer = 0;
	return (length);
}
