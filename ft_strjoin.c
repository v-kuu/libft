/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:00:36 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 10:11:27 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <aio.h>

size_t	ft_strlen(const char *string);

char	*ft_strjoin(char const *prefix, char const *suffix)
{
	size_t	length;
	char	*joined;

	length = ft_strlen(prefix) + ft_strlen(suffix);
	joined = (char *)malloc(length * sizeof(char));
	while (*prefix != 0)
	{
		*joined = *prefix;
		joined++;
		prefix++;
	}
	while (*suffix != 0)
	{
		*joined = *suffix;
		joined++;
		suffix++;
	}
	*joined = 0;
	return (joined);
}
