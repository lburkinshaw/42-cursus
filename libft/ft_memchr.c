/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:55:13 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/09 12:05:27 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	ch = (unsigned char) c;
	str = (unsigned char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == ch)
			return (str + i);
		else
			i++;
	}
	if (ch == '\0')
		return (str + i);
	else
		return (NULL);
}
