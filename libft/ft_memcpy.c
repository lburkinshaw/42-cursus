/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:51:48 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/06 13:00:32 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*dstptr;
	const unsigned char	*srcptr;
	size_t				i;

	dstptr = dst;
	srcptr = src;
	i = 0;
	while (i < n)
	{
		dstptr[i] = srcptr[i];
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	const char source[] = "Hello, this is the source string.";
    char d1[50]; // Buffer to store the copied string
    char d2[50]; 
    // Copy the content of source to destination using memcpy
    memcpy(d1, source, sizeof(source));
	ft_memcpy(d2, source, sizeof(source));

    // Add a null terminator so destination string is null-terminated
    d1[sizeof(source) - 1] = '\0';
	d2[sizeof(source) - 1] = '\0';

    // Print the source and destination strings
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", d1);
   	printf("Copied string: %s\n", d2);
	return(0);
}
*/