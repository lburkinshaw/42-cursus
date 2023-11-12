/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:03:14 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/09 10:28:15 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (NULL);
}
/*
int	main(void)
{
 	const char	*string;
	int	find;
	const char *result;
	
	string = "Helloo";
	find = 'e'; 
	result = ft_strchr(string, find);
	if (result != NULL)
		printf("MyCode: 1st occurence is index %ld.\n", result - string);
	else
		printf("MyCode: No occurences of %c in %s.\n", find, string);

	result = strchr(string, find);
	if (result != NULL)
		printf("RealCode: 1st occurence is index %ld.\n", result - string);
	else
		printf("Real Code: No occurences of %c in %s.\n", find, string);
	return (0);
}*/
