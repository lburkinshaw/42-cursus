/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:25:58 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/27 16:41:06 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	char *ptr;
	size_t i;
	ptr = b;
	i = 0;

	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return(ptr);
}
/*int main(void)
{
    char	string[] = "This is a string";
	int	length;
	int c;

	length = 16;
	c = 'L';
	printf("String: %s, character: %c; length %d\n", string, c, length);
    printf("My code: %s\n", memset(string, c, length));
	printf("Real code:%s\n", ft_memset(string, c, length));
	return 0;
}*/
