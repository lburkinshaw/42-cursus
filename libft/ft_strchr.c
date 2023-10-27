/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:03:14 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/26 11:52:03 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

const char	*ft_strchr(const char *str, int c)//return pointer to index location of c in string.
{
	int i;
	i = 0;

	while (str[i] != '\0')//iterate through string until find c or reach null terminator.
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	
	if (c == '\0')// if c is '\0', return the location.
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
	find = 'e'; 
	result = ft_strchr(string, find);
	if (result != NULL)
		printf("MyCode: 1st occurence of %c in %s is index %ld.\n", find, string, result - string);
	else
		printf("MyCode: No occurences of %c in %s.\n", find, string);

	result = strchr(string, find);
	if (result != NULL)
		printf("RealCode: 1st occurence of %c in %s is index %ld.\n", find, string, result - string);
	else
		printf("Real Code: No occurences of %c in %s.\n", find, string);
	return (0);
}
