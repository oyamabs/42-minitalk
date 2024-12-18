/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:29:14 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/21 10:13:23 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdlib.h>

static size_t	getnumberoffigures(int n)
{
	size_t	totalsize;
	long	nn;

	totalsize = 0;
	nn = n;
	if (n == 0)
		return (1);
	if (nn < 0)
	{
		totalsize++;
		nn = -nn;
	}
	while (nn > 0)
	{
		nn /= 10;
		totalsize++;
	}
	return (totalsize);
}

static void	populate_array(char *s, int n, size_t size)
{
	int		isneg;
	long	nn;
	size_t	index;

	nn = n;
	if (nn < 0)
		nn = -nn;
	isneg = (n < 0);
	index = size - 1;
	while (nn > 0)
	{
		s[index] = (nn % 10) + '0';
		nn /= 10;
		index--;
	}
	if (isneg == 1)
		s[index] = '-';
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	size;

	size = getnumberoffigures(n);
	s = (char *)ft_calloc(sizeof(*s), size + 1);
	if (!s)
		return (NULL);
	if (n == 0)
		ft_strlcpy(s, "0", 2);
	populate_array(s, n, size);
	return (s);
}
