/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:25:58 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/06 13:00:57 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr++ = (unsigned char)c;
		len--;
	}
	return (b);
}
/*
int main(void)
{
    char	string[] = "This is a string";
	int	length;
	char c;

	length = 20;
	c = 'L';
	
//	printf("String: %s, character: %c; length %d\n", string, c, length);
//  printf("Real code: %s\n", memset(string, c, sizeof(char) * length));
	printf("My code: %s\n", ft_memset(string, c, sizeof(char) * length));
	return 0;
}
*/
/*When length is larger than space available in string, 
real memset gives error but mine runs. This should be 
accounted for by user in main (for now). Consider improving later.*/ 