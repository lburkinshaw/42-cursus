/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_original.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:44:21 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/14 13:52:58 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_strings(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
		{
			j++;
			i++;
			while (s[i] == c && s[i])
				i++;
		}
	}
	return (j);
}

int	count_max_len(char const *s, char c)
{
	int	i;
	int	max;
	int	len;

	i = 0;
	max = 0;
	len = 0;
	while (s[i])
	{
		if (s[i++] != c)
			len++;
		else
		{
			i++;
			len++;
			if (len > max)
				max = len;
			while (s[i] == c && s[i])
				i++;
			len = 0;
		}
	}
	return (max + 1);
}

char	**ft_split(char const *s, char c)
{
    int		num_strings;
    int		max_len;
    char	**split_str;
    int		i;

    i = 0;
    num_strings = count_strings(s, c);
    max_len = count_max_len(s, c);
    split_str = (char **)malloc(num_strings * sizeof(char *));
    while (s[i] && i < num_strings)
    {
        split_str[i] = (char *)malloc(max_len * sizeof(char));
        if (split_str[i] == 0)
            return (NULL);
        i++;
    }
    return (split_str);
}
	return (split_str);
}