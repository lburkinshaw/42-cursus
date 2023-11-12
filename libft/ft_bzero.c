/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:06:22 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/06 12:55:40 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
		ft_memset(s, 0, n);
}
/*
int main(void)
{
	char	string[] = "This is a string";
	size_t	length;

	length = 6;
//	printf("String: %s, length %zu\n", string, length);
	ft_bzero(string, length);
//	printf("My code: %s\n",string);
//	printf("Real code:%s\n", bzero(string, length));
	return 0;
}
*/