/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasjimen <yasjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:12:57 by yasjimen          #+#    #+#             */
/*   Updated: 2024/09/28 16:37:54 by yasjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char **split_array, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(split_array[i]);
		i++;
	}
	free(split_array);
}

static char	*get_words(char const *s, char c, size_t *index)
{
	size_t	start;
	size_t	end;

	while (s[*index] && s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	end = *index;
	return (ft_substr(s, start, end - start));
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	size_t	words;
	size_t	i;
	size_t	index;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split_array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split_array)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		split_array[i] = get_words(s, c, &index);
		if (!split_array[i])
		{
			free_split(split_array, i);
			return (NULL);
		}
		i++;
	}
	split_array[i] = NULL;
	return (split_array);
}
