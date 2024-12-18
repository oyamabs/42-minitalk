/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:10:41 by tchampio          #+#    #+#             */
/*   Updated: 2024/10/18 16:02:48 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"
#include <limits.h>
#include <stdint.h>

void	*ft_calloc(size_t memsize, size_t count)
{
	size_t	total;
	void	*allocated;

	total = memsize * count;
	if (memsize != 0 && total / memsize != count)
		return (NULL);
	allocated = malloc(total);
	if (allocated == NULL)
		return (NULL);
	ft_bzero(allocated, total);
	return (allocated);
}
