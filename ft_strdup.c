/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:29:56 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 15:42:07 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <aio.h>

size_t	ft_strlen(const char *string);

char	*ft_strdup(const char *string)
{
	size_t	elements;
	char	*duplicate;

	elements = ft_strlen(string);
	duplicate = (char *)malloc(elements * sizeof(char));
	return (duplicate);
}
