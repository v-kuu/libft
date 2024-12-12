/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:15:19 by vkuusela          #+#    #+#             */
/*   Updated: 2024/12/10 11:17:41 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Calling the function with the macro FT_FREE(ptr) defined in libft.h
 * allows you to use this function without worrying about typecasting. */

void	*ft_free_base(void **ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (NULL);
}
