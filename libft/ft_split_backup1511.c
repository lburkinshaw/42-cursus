/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_backup1511.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:36:31 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/15 11:42:34 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (c  == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static size_t	count_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	num_strings;
	char			**split_str;
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (*s == c)
		s++;
	num_strings = count_strings(s, c);
	split_str = (char **)malloc((num_strings + 1) * sizeof(char *));
	if (split_str == NULL)
		return (NULL);
	while (i < num_strings)
	{
		split_str[i] = ft_substr(s, j, count_len(s + j, c));
		if (split_str[i] == 0)
		{
			free_array(i, split_str);
			return (NULL);
		}
		j += count_len(s + j, c);
		while (s[j] == c)
			j++;
		i++;
	}
	split_str[i] = 0;
	return (split_str);
}
/*
int	main(void)
{
	char *s = "-hello--you---";	
	char **result = ft_split(s, '-');
	int i = 0;
	while(result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/