/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:22:39 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 16:28:19 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *string, void (*function)(unsigned int, char*))
{
	unsigned int	index;
	char			*pointer;

	index = 0;
	pointer = string;
	while (string[index] != 0)
	{
		function(index, pointer);
		index++;
		pointer++;
	}
}
