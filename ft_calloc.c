/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:02:11 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/30 15:27:45 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <stdlib.h>

void	*ft_calloc(size_t elements, size_t size)
{
	void	*area;

	if (elements == 0 || size == 0)
		return (0);
	if ((elements * size) > (size_t)-1)
		return (0);
	area = malloc(elements * size);
	return (area);
}
