/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:54:09 by lburkins          #+#    #+#             */
/*   Updated: 2024/01/17 15:09:41 by lburkins         ###   ########.fr       */
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
		return (free(stash), NULL);
	while (stash[i])
		newstr[i++] = stash[j++];
	j = 0;
	while (buff[j])
		newstr[i++] = buff[j++];
	newstr[i] = '\0';
	if (stash)//this part changed segfault  to timeout on giant line
	{
		free(stash);
		stash = NULL;
	}
	return (free(buff), newstr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
