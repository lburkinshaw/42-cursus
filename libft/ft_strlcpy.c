/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:50:30 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/07 16:04:38 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*int main(void)
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
*/
/*why does real function give result of "zsh: abort      ./a.out"
 in terminal when dest_size is greater than actual size of dest??*/
