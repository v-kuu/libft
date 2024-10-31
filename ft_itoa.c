/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:56:02 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 12:59:17 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	digit_count(int integer);

char	*ft_itoa(int integer)
{
	char	*string;
	int		sign;
	int		size;

	sign = (integer < 0);
	if (integer == 0)
	{
		string = (char *)malloc(2 * sizeof(char));
		string = "0\0";
	}
	else
	{
		size = digit_count(integer);
		string = (char *)malloc((size + sign + 1) * sizeof(char));
		string[size - 1] = 0;
		while (integer > 0)
		{
			string[size - 2] = integer % 10 + 48;
			size--;
			integer /= 10;
		}
		if (sign)
			string[size - 2] = '-';
	}
	return (string);
}

static int	digit_count(int integer)
{
	int	count;

	count = 1;
	while (integer > 9)
	{
		count++;
		integer /= 10;
	}
	return (count);
}
