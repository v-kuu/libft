/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:26:13 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/29 14:28:02 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char character)
{
	if (character >= 32 && character <= 126)
		return (1);
	else
		return (0);
}
