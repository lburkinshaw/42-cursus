/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:21 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/02 14:02:25 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0')  && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    char *h;
    char *n;
    size_t i;

    h = (char *) haystack;
    n = (char *) needle;
    i = 0;
   
    while (h[i] && i < len)
    {
        if (ft_strncmp(h + i, n, ft_strlen(n)) == 0)
            return (h +i);
        else
            i++;
    }
    return (0);
}    
 /*       {
            if (h[i] != n[i])
                i++;
            else 
                while 
                    h[i] =

        return h[i];
    else 
    if 
    else
     

}*/

int main(void)
{
    char *haystack = "Hello world";
    char *needle = "0";
    char *location = strstr(haystack, needle);

    if (location != NULL) 
    {
        printf("'%s' found at index: %ld\n", needle, location - haystack);
    }
    else
    {
        printf("Substring not found\n");
    }
    return (0);
}