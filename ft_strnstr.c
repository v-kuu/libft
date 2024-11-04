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
	const char	*candidate;

	if (*little == 0)
		return ((char *)big);
	while (*big != 0)
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
