/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:54:22 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/22 15:29:22 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*stash;//need this to prevent leaks on read error test
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		{
			//ft_free(&remainder);
			return (NULL);
		}
	stash = read_file(fd, remainder);
	if (!stash)
	{
		ft_free(&remainder);
		return (NULL);
	}
	//stash = temp_stash;
	line = extract_line(stash);
	if (!line)
	{
		ft_free(&line);
		ft_free(&stash);
		return (NULL);
	}
	remainder = trim_stash(stash, line);
	return (line);
}

char	*read_file(int fd, char *rem)
{
	char	*buff;
	int		char_read;
	char	*stash_add;

	stash_add = rem; //this is just for clarity in code
	char_read = 1;
	while (!check_newline(stash_add) && char_read != 0)
	{
		buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff)
		{
			ft_free(&stash_add);
			return (NULL);
		}
		char_read = read(fd, buff, BUFFER_SIZE);
		if ((!stash_add && char_read == 0) || char_read == -1)
		{
			ft_free(&buff);
			return (NULL);
		}
		buff[char_read] = '\0';
		stash_add = ft_strjoin(stash_add, buff);
		ft_free(&buff);
	}
	return (stash_add);
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
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*trim_stash(char *stash, char *line)
{
	char	*trimmed;
	int		i;
	int		j;

	j = 0;
	i = ft_strlen(line);
	if (stash[i] == '\0')
	{
		ft_free(&stash);
		return (NULL);
	}
	while (stash[i++])
		j++;
	trimmed = malloc(sizeof(char) * (j + 1));
	if (!trimmed)
	{
		//ft_free(&trimmed);//not necessary?
		return (NULL);
	}
	i = ft_strlen(line);
	j = 0;
	while (stash[i])
		trimmed[j++] = stash[i++];
	trimmed[j] = '\0';
	ft_free(&stash);//this maybe shouldnt be freed here but removing causes leaks.
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
