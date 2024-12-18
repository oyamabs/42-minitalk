/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:57:55 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/19 15:35:35 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;
	size_t	allocated;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		allocated = len + 1;
	else
		allocated = (strlen - start) + 1;
	str = (char *)malloc(sizeof(*str) * allocated);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, allocated);
	return (str);
}
