/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:34:42 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/19 14:52:38 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*str;

	length = ft_strlen(s) + 1;
	str = (char *)malloc(sizeof(*str) * length);
	if (!str)
		return (NULL);
	ft_memcpy((char *)str, (const char *)s, length);
	return (str);
}
