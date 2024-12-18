/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:02:23 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/15 17:23:50 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *s)
{
	int	isnegative;
	int	res;

	res = 0;
	isnegative = 1;
	while (*s == ' ' || *s == '\f' || *s == '\r' || *s == '\v' || *s == '\t'
		|| *s == '\n')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			isnegative = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = (res * 10) + (*s - '0');
		s++;
	}
	return (res * isnegative);
}
