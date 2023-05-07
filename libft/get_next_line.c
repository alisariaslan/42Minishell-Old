/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:05:20 by msariasl          #+#    #+#             */
/*   Updated: 2023/03/28 11:34:26 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_raw_line(int fd, char *raw_str)
{
	char	*buff;
	int		byte;

	byte = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (!ft_gnl_strchr(raw_str, '\n') && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[byte] = '\0';
		raw_str = ft_gnl_strjoin(raw_str, buff);
	}
	free(buff);
	return (raw_str);
}

static char	*get_refined_str(char *raw_str)
{
	char	*ret;
	int		after_newline;
	int		i;

	if (!raw_str || raw_str[0] == '\0')
		return (NULL);
	i = 0;
	after_newline = newline_counter(raw_str);
	ret = malloc(sizeof(char) * (after_newline + 2));
	if (!ret)
		return (NULL);
	while (raw_str[i] != '\0' && raw_str[i] != '\n')
	{
		ret[i] = raw_str[i];
		i++;
	}
	if (raw_str[i] == '\n')
	{
		ret[i] = raw_str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

static char	*get_new_raw_str(char *str)
{
	int		i;
	int		s;
	char	*rest;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	rest = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!rest)
		return (NULL);
	i++;
	s = 0;
	while (str[i])
		rest[s++] = str[i++];
	rest[s] = '\0';
	free(str);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*raw_str;
	char		*refined_str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	raw_str = get_raw_line(fd, raw_str);
	if (!raw_str)
		return (NULL);
	refined_str = get_refined_str(raw_str);
	raw_str = get_new_raw_str(raw_str);
	return (refined_str);
}
