
#include "libft.h"

int	count_strings(char const *s, char c)
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

int	count_len(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i] == c)
	{
		while (s[i] == c)
			i++;
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			i++;
			j++;
		}
		return (j);
	}
	return (0);
}

unsigned int	skip_delimeter(const char *s, char c)
{
	int	i;
	
	i = 0;
	while (s[i] == c && s[i])
		i++;
}

char	**ft_split(char const *s, char c)
{
	int				num_strings;
	char			**split_str;
	int				i;
	unsigned int	j;
	int				len;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	ft_strtrim(s, &c);
	num_strings = count_strings(s, c);
	split_str = (char **)malloc(num_strings * sizeof(char *));
	if (split_str == 0)
		return (NULL);
	i = 0;
	while (i < num_strings)
	{
		len = count_len(s, c);
		split_str = ft_substr(s, j, len);
		j += len;
		j = skip_delimeter(s + j, c);
		i ++;
	}



}