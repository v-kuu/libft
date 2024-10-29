/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:45:32 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 15:17:44 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int character)
{
	int		index;

	index = 0;
	while ((string[index] != 0 && character != 0)
		|| (string[index] == character && character == 0))
	{
		if (string[index] == character)
			return ((char *)&string[index]);
		index++;
	}
	return (0);
}
