/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:31:51 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/18 11:18:01 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destsize;
	size_t	srcsize;

	i = 0;
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (size <= 0 || destsize >= size)
		return (srcsize + size);
	while (i < size - destsize - 1 && src[i])
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + srcsize);
}
