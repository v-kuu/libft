/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:15:28 by vkuusela          #+#    #+#             */
/*   Updated: 2024/10/31 11:53:30 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

static int	words(char const *source, char character);

char	**ft_split(char const *source, char character)
{
	char	**array;
	int		count;
	int		index;

	index = 0;
	count = words(source, character);
	array = (char **)malloc(count * sizeof(char **) + 1);
}

static int	words(char const *source, char character)
{
	int	count;

	count = 1;
	while (*source != 0)
	{
		if (*source == character)
			count++;
		source++;
	}
	return (count);
}

static char	*creator(char const *source, char character)
{
	size_t	index;
	char	*word;

	index = 0;
	while (source[index] != 0 && source[index] != character)
	{
		index++;
	}
	word = (char *)malloc((index + 1) * sizeof(char));
	while (index > 0)
	{
		*word++ = *source++;
		index--;
	}
	*word = 0;
	return (word);
}
