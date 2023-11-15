/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:50:49 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/13 17:12:16 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		else
			i--;
	}
	if (ch == s[0])
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*int	main(void)
{
 	const char	*string;
	int	find;
	const char *result;

	string = "Helloo";
	find = 'l';
	result = ft_strrchr(string, find);
	if (result != NULL)
		printf("MyCode: Last occurence is index %ld.\n", result - string);
	else
		printf("MyCode: No occurences");

	result = strrchr(string, find);
	if (result != NULL)
		printf("RealCode: Last occurence is index %ld.\n", result - string);
	else
		printf("Real Code: No occurences", find, string);
	return (0);
}*/