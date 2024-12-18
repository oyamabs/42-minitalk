/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:44:15 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/18 10:55:22 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(char *str, int c)
{
	char	*s;
	char	*last;
	char	tofind;

	s = str;
	last = NULL;
	tofind = (char)c;
	while (*s)
	{
		if (*s == tofind)
			last = s;
		s++;
	}
	if (*s == tofind)
		last = s;
	return (last);
}
