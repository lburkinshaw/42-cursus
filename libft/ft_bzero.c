/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:22 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/27 16:56:40 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len) //Remove this before submitting? 
{
	const char *ptr;
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
void ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, '0', n);
}
	/*char *ptr;
	size_t i;
	ptr = s;
	i = 0;

	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return(ptr);
}*/
int main(void)
{
	char	string[] = "This is a string";
	size_t	length;

	length = 6;
	printf("String: %s, length %zu\n", string, length);
	ft_bzero(string, length);
	printf("My code: %s\n",string);
	printf("Real code:%s\n", bzero(string, length));
	return 0;
}
