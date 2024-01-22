/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:54:09 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/22 14:53:16 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	if (!newstr)
	{
		ft_free(&stash);
		return (NULL);
	}
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

void	ft_free(char **str)
{
	if (*str)
	{
		free(*str);
		*str = NULL;
	}
}
/*
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	else
		return (0);
}*/

/*char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;
	char	*source;

	source = (char *)s1;
	len = ft_strlen(source);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, source, len + 1);
	return (dest);
}*/

/*void	ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}*/