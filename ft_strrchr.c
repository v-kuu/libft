/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:20:53 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 15:21:24 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *string, int character)
{
	int		index;
	char	*result;

	index = 0;
	result = 0;
	while ((string[index] != 0 && character != 0)
		|| (string[index] != character && character == 0))
	{
		if (string[index] == character)
			result = (char *)&string[index];
	}
	return (result);
}
