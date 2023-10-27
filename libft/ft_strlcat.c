/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:13:11 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/27 12:07:35 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
*/
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dsti;
	size_t srci;
	size_t dstlen;
	size_t srclen;
//	char error [] = "Error: Not enough space in destination buffer.\n";
	dstlen = 0;
	srclen = 0;
	while (dst[dstlen] != '\0')
        dstlen++;
  /*  if (dstsize >= dstlen)
		ft_putstr(error);
		return (1);//attempting to account for dstsize being larger than len available at dest.
    */
    srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0)
		return (srclen);
	else
	{
		dsti = dstlen;
		srci = 0;
		while ((dsti < dstsize - 1) && (src[srci] != '\0'))
		{
			dst[dsti] = src[srci];
			dsti++;
			srci++;
		}
		dst[dsti] = '\0';
		return (dstlen + srclen);
	}
}

int main(void)
{
	char d1[] = "Hello";
	char s1[] = "ByeBye";
	char d2[] = "Hello";
	char s2[] = "ByeBye";
	size_t	dest_size = 10;
	size_t	test_mine;
	size_t	test_real;
	
   	printf("Original d1: %s\n", d1);
	test_mine = ft_strlcat(d1, s1, dest_size);
	printf("MyCode size: %zu. Dest now: %s\n", test_mine, d1);
	printf("Original d2: %s\n", d2);
	test_real = strlcat(d2, s2, dest_size);
	printf("RealCode size: %zu. Dest now: %s\n", test_real, d2);
	return (0);
}

/* why does real function give result of "zsh: abort      ./a.out" in terminal when dest_size is greater than actual size of dest??*/
