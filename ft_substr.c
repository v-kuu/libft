/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:57:17 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 16:02:41 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <stdlib.h>

char	*ft_substr(char const *string, unsigned int start, size_t length)
{
	char	*substring;

	substring = (char *)malloc(length * sizeof(char));
	while (length > 0)
	{
		*substring = string[start];
		substring++;
		start++;
		length--;
	}
	*substring = 0;
	return (substring);
}
