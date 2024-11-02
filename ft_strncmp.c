/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:27:46 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 15:40:10 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	while (length)
	{
		if (*first != *second)
			return (*first - *second);
		if (*first == 0)
			return (0);
		length--;
		first++;
		second++;
	}
	return (0);
}
