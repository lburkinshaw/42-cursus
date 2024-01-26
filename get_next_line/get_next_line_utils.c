/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:54:09 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/23 15:02:09 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*ft_strjoin(char *stash, char *buff)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	if (!stash)
	{
		stash = malloc(sizeof(char) * 1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	newstr = malloc(sizeof(char) * (ft_strlen(stash) + ft_strlen(buff) + 1));
	if (malloc_check(&newstr, &stash) > 0)
		return (NULL);
	while (stash[j])
		newstr[i++] = stash[j++];
	j = 0;
	while (buff[j])
		newstr[i++] = buff[j++];
	newstr[i] = '\0';
	ft_free(&stash);
	return (newstr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	malloc_check(char **check_str, char **free_str)
{
	if (!*check_str)
	{
		ft_free(free_str);
		return (1);
	}
	return (0);
}

void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}
