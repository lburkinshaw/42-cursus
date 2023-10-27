/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:50:49 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/26 12:11:44 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

const char	*ft_strrchr(const char *str, int c)//return pointer to index location of c in string.
{
	int i;

	i = 0;
    while (str[i] != '\0')
		i++;

	while (str[i] != str[0])//iterate through string until find c or reach first character.
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}

	if (c == str[i])// if c is value stored at str[i] (1st char), return the location.
		return (&str[i]);
	else//otherwise, c hasn't been found so return NULL.
		return NULL;
}

int	main(void)
{
 	const char	*string;
	int	find;
	const char *result;

	string = "Helloo";
	find = 'l';
	result = ft_strrchr(string, find);
	if (result != NULL)
		printf("MyCode: Last occurence of %c in %s is index %ld.\n", find, string, result - string);
	else
		printf("MyCode: No occurences of %c in %s.\n", find, string);

	result = strrchr(string, find);
	if (result != NULL)
		printf("RealCode: Last occurence of %c in %s is index %ld.\n", find, string, result - string);
	else
		printf("Real Code: No occurences of %c in %s.\n", find, string);
	return (0);
}
