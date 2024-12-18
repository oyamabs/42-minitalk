/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:23:50 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/23 13:16:12 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char sep)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
			count++;
		while (*s != sep && *s)
			s++;
	}
	return (count);
}

static int	free_all(char **split, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
		free(split[i++]);
	free(split);
	return (1);
}

static int	populate(char **split, const char *s, char sep)
{
	size_t	wordlength;
	size_t	i;

	wordlength = 0;
	i = 0;
	while (*s)
	{
		while (*s == sep && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, sep))
				wordlength = ft_strlen(s);
			else
				wordlength = ft_strchr(s, sep) - s;
			split[i] = ft_substr(s, 0, wordlength);
			if (split[i] == NULL)
				return (free_all(split, i));
			i++;
			s += wordlength;
		}
	}
	split[i] = NULL;
	return (0);
}

char	**ft_split(const char *s, char separator)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *)
			* (count_words(s, separator) + 1));
	if (!split)
		return (NULL);
	if (populate(split, s, separator) == 1)
		return (NULL);
	return (split);
}
