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

#include "libft.h"

static int	ft_digit_count(int integer);

char	*ft_itoa(int integer)
{
	char	*string;
	int		sign;
	int		size;

	sign = (integer < 0);
	size = ft_digit_count(integer);
	if (sign)
		integer *= -1;
	string = (char *)ft_calloc(size + sign + 1, sizeof(char));
	if (string == 0)
		return (0);
	if (integer == 0)
		string[0] = '0';
	while (integer > 0)
	{
		string[size - 1] = integer % 10 + 48;
		size--;
		integer /= 10;
	}
	if (sign)
		string[0] = '-';
	return (string);
}

static int	ft_digit_count(int integer)
{
	int	count;

	count = 1;
	if (integer < 0)
	{
		integer *= -1;
		count++;
	}
	while (integer > 9)
	{
		count++;
		integer /= 10;
	}
	return (count);
}
