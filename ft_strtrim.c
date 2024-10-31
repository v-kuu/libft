/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:12:39 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 11:14:41 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <aio.h>

static int	ft_scanner(char suspect, char const *set);
size_t		ft_strlen(const char *string);
size_t		ft_strlcat(char	*destination, const char *source, size_t size);

char	*ft_strtrim(char const *string, char const *set)
{
	size_t	length;
	char	*trimmed;

	length = ft_strlen(string);
	while (!ft_scanner(string[length - 2], set))
		length--;
	while (!ft_scanner(*string, set))
	{
		length--;
		string++;
	}
	trimmed = (char *)malloc(length * sizeof(char));
	ft_strlcat(trimmed, string, length);
	return (trimmed);
}

static int	ft_scanner(char suspect, char const *set)
{
	while (*set != 0)
	{
		if (suspect == *set)
			return (1);
		set++;
	}
	return (0);
}
