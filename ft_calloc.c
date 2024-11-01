/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:02:11 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 17:01:07 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <stdlib.h>

void	ft_bzero(void *area, size_t length);

void	*ft_calloc(size_t elements, size_t size)
{
	void	*area;
	size_t	buffer;

	buffer = elements * size;
	if (elements == 0 || size == 0)
		return (0);
	if (buffer / size != elements)
		return (0);
	area = malloc(elements * size);
	if (area == 0);
		return (0);
	ft_bzero(area, buffer);
	return (area);
}
