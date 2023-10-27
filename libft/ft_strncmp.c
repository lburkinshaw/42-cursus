/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:13:15 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/25 16:35:24 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0')  && i != n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char	*string1;
	char	*string2;
	
	string1 = "";
	string2 = "i";
	printf("My code says: %d\n", ft_strncmp(string1, string2, 10));
	printf("Actual code says: %d\n", strncmp(string1, string2, 10));
	return (0);
}
