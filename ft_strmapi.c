/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:50:47 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 16:21:49 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <aio.h>

size_t	ft_strlen(const char *string);

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	int		index;
	int		length;
	char	*result;

	length = ft_strlen(string);
	result = (char *)malloc(length * sizeof(char));
	index = 0;
	while (index < length)
	{
		result[index] = function(index, string[index]);
		index++;
	}
	result[index] = 0;
	return (result);
}