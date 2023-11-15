/* ************************************************************************** */
/*	                                                                        */
/*	                                                    :::      ::::::::   */
/*   ft_strnstr.c	                                   :+:      :+:    :+:   */
/*	                                                +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>	      +#+  +:+       +#+        */
/*	                                            +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:21 by lburkins	      #+#    #+#             */
/*   Updated: 2023/11/06 12:10:41 by lburkins         ###   ########.fr       */
/*	                                                                        */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (needle == haystack)
		return (h);
	if (!haystack && len == 0)
		return (NULL);
	if (!needle && ft_strlen(needle) == 0)
		return (h);
	while (h[i] && i <= len && (ft_strlen(n) <= (len - i)))
	{
		if (ft_strncmp(h + i, n, ft_strlen(n)) == 0)
			return (h + i);
		else
			i++;
	}
	return (0);
}
/*
int main(void)
{
	char *s1 = "oh no not the empty string !";
 	char *s2 = "";
 	size_t max = 0;
 	char *i1 = strnstr(s1, s2, max);
 	char *i2 = ft_strnstr(s1, s2, max);
	printf("%s\n", i1);
	printf("%s\n", i2);
 	if (i1 == i2)
 		printf("TEST_SUCCESS");
 	else 
		printf("TEST_FAILED");
	return 0;
	char haystack[] = "lorem ipsum dolor sit amet";
	char needle[] = "dolor";
	char *location = strstr(haystack, needle);

	if (location != NULL) 
	{
	    printf("'%s' found at index: %ld\n", needle, location - haystack);
	}
	else
	{
	    printf("Substring not found\n");
	}

	printf("%s\n", ft_strnstr(haystack, needle, 15));
	printf("%s\n", strnstr(haystack, needle, 15));
}*/