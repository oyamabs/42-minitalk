/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:33:24 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/18 12:39:00 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlesize;
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	littlesize = ft_strlen(little);
	i = 0;
	while (*big && i < len)
	{
		if (ft_strncmp(big, little, littlesize) == 0
			&& (i + littlesize) <= len)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
