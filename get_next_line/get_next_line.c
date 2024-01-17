/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:54:22 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/17 14:51:28 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*temp_stash;
	char		*nxt_line;

	//printf("%d", fd);
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	temp_stash = read_file(fd, stash);
	if (!temp_stash)
	{
		if (stash)
			free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = temp_stash;
	nxt_line = extract_line(stash);
	stash = trim_stash(stash, nxt_line);
	return (nxt_line);
}

char	*read_file(int fd, char *stash)
{
	char	*buff;
	int		char_read;

	char_read = 1;
	while (!check_newline(stash) && char_read != 0)
	{
		buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff)
			return (NULL);
		char_read = (int)read(fd, buff, BUFFER_SIZE);
		if ((!stash && char_read == 0) || char_read == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[char_read] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	return (stash);
}

char	*extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*trim_stash(char *stash, char *next_line)
{
	char	*trimmed;
	int		i;
	int		j;

	i = 0;
	j = 0;
	i = ft_strlen(next_line);
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	while (stash[i++])
		j++;
	trimmed = malloc(sizeof(char) * (j + 1));
	if (!trimmed)
		return (NULL);
	i = ft_strlen(next_line);
	j = 0;
	while (stash[i])
		trimmed[j++] = stash[i++];
	trimmed[j] = '\0';
	free(stash);
	return (trimmed);
}

int	check_newline(char *stash)
{
	int	i;

	i = 0;
	if (!stash)
		return (0);
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
