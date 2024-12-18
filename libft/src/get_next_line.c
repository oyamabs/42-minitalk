/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:15:38 by tchampio          #+#    #+#             */
/*   Updated: 2024/12/02 17:19:36 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

void	getlinefrombuffer(char **line, char *buffer)
{
	size_t		remaining;
	char		*newline_pos;
	char		saved_char;

	newline_pos = _ft_strchr(buffer, '\n');
	if (newline_pos)
	{
		saved_char = newline_pos[1];
		newline_pos[1] = '\0';
		_ft_strcat(line, buffer);
		if (*line == NULL)
			return ;
		newline_pos[1] = saved_char;
		newline_pos++;
	}
	else
	{
		_ft_strcat(line, buffer);
		if (*line == NULL)
			return ;
		newline_pos = buffer + _ft_strlen(buffer);
	}
	remaining = _ft_strlen(newline_pos);
	_ft_memcpy(buffer, newline_pos, remaining);
	buffer[remaining] = '\0';
}

char	*rereadbuffer(char *buffer)
{
	size_t	len;
	char	*line;

	line = _ft_strchr(buffer, '\n');
	if (line == NULL)
		line = _ft_strchr(buffer, '\0');
	len = line - buffer + (*line == '\n');
	line = (char *)malloc(len + 1);
	if (line == NULL)
		return (NULL);
	_ft_memcpy(line, buffer, len);
	line[len] = '\0';
	_ft_memcpy(buffer, buffer + len, BUFFER_SIZE - len);
	buffer[BUFFER_SIZE - len] = '\0';
	return (line);
}

char	*readfd(int fd, char *buffer)
{
	ssize_t		bytes;
	char		*line;

	line = rereadbuffer(buffer);
	while (!_ft_strchr(line, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(line);
			return (NULL);
		}
		buffer[bytes] = '\0';
		if (bytes == 0 || _ft_strchr(buffer, '\n'))
		{
			getlinefrombuffer(&line, buffer);
			return (line);
		}
		_ft_strcat(&line, buffer);
		if (line == NULL)
			return (NULL);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = {0};
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	line = readfd(fd, buffer);
	if (line == NULL)
		return (NULL);
	if (_ft_strlen(line) == 0)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
