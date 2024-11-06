/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:57:05 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 14:47:55 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	size_t		index;
	size_t		little_len;
	const char	*candidate;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (*big != 0 && length > 0 && length >= little_len)
	{
		index = 0;
		if (*big == *little)
		{
			candidate = big;
			while (candidate[index] == little[index])
			{
				index++;
			}
			if (little[index] == 0)
				return ((char *)candidate);
		}
		big++;
		length--;
	}
	return (0);
}
