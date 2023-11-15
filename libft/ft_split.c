/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:36:31 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/15 12:26:24 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_strings(char const *s, char c)
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

static size_t	split(char const *s, char c, char **array, size_t i, size_t j)
{
	array[i] = ft_substr(s, j, count_len(s + j, c));
	if (array[i] == 0)
	{
		free_array(i, array);
		return (i);
	}
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		**split_str;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (*s == c)
		s++;
	words = count_strings(s, c);
	split_str = (char **)malloc((words + 1) * sizeof(char *));
	if (split_str == NULL)
		return (NULL);
	while (i < words)
	{
		i = split(s, c, split_str, i, j);
		j += count_len(s + j, c);
		while (s[j] == c)
			j++;
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
}*/
