/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:30:59 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/19 13:41:02 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	char	tofind;

	tofind = (char)c;
	s = (char *)str;
	while (*s)
	{
		if (*s == tofind)
			return (s);
		s++;
	}
	if (*s == tofind)
		return (s);
	return (NULL);
}
