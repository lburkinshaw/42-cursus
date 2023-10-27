/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:50:30 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/26 17:39:40 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

   	i = 0;
	len = 0;
	while (dst[len] != '\0')
        len++;
    if (dstsize >= len + 1)//attempting to account for dstsize being larger than len available at dest.
    {
        return (0);
    }
    len = 0;
	while (src[len] != '\0')
		len++;
	if (dstsize == 0)
		return (len);
	else
	{
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (len);
	}
}

int main(void)
{
	char dest[] = "Lauren";
	char source[] = "Not Lauren";
	size_t	dest_size = 20;
	size_t	test_mine;
	size_t	test_real;
	
   	printf("Original dest: %s\n", dest);
	test_mine = ft_strlcpy(dest, source, dest_size);
	printf("MyCode source size: %zu. Dest now: %s\n", test_mine, dest);
	test_real = strlcpy(dest, source, dest_size);
	printf("RealCode source size: %zu. Dest now: %s\n", test_real, dest);
	return (0);
}

/* why does real function give result of "zsh: abort      ./a.out" in terminal when dest_size is greater than actual size of dest??*/
