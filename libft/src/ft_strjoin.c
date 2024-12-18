/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:40:16 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/18 15:47:12 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lengths1;
	size_t	lengths2;
	size_t	index;
	char	*str;

	lengths1 = ft_strlen(s1);
	lengths2 = ft_strlen(s2);
	index = 0;
	str = (char *)ft_calloc(sizeof(*str), (lengths1 + lengths2 + 1));
	if (str == NULL)
		return (NULL);
	while (*s1)
	{
		str[index] = *s1;
		s1++;
		index++;
	}
	while (*s2)
	{
		str[index] = *s2;
		s2++;
		index++;
	}
	return (str);
}
