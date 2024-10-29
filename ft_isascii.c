/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:21:13 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 14:24:39 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(unsigned char character)
{
	if (character >= 0 && character <= 127)
		return (1);
	else
		return (0);
}
