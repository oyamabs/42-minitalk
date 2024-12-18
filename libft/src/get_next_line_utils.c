/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:09:25 by tchampio          #+#    #+#             */
/*   Updated: 2024/12/02 17:20:10 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*_ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != c)
		++s;
	if (*s != '\0' || c == '\0')
		return ((char *)s);
	return (NULL);
}

void	*_ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i++ < n)
		*(char *)dest++ = *(char *)src++;
	return ((void *)((char *)dest - i));
}

size_t	_ft_strlen(const char *s)
{
	const char	*org = s;

	while (*s)
		++s;
	return (s - org);
}

void	_ft_strcat(char **dst_ptr, const char *src)
{
	size_t	dst_len;
	size_t	src_len;
	char	*ans;

	dst_len = _ft_strlen(*dst_ptr);
	src_len = _ft_strlen(src);
	ans = malloc(dst_len + src_len + 1);
	if (ans)
	{
		_ft_memcpy(ans, *dst_ptr, dst_len);
		_ft_memcpy(ans + dst_len, src, src_len);
		ans[dst_len + src_len] = '\0';
	}
	free(*dst_ptr);
	*dst_ptr = ans;
}
