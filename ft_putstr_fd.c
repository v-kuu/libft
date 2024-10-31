/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:32:01 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 16:43:31 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <aio.h>

size_t	ft_strlen(const char *string);

void	ft_putstr_fd(char *string, int file_descriptor)
{
	size_t	length;

	length = ft_strlen(string);
	write(file_descriptor, string, length);
}
