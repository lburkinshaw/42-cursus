/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:54:25 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/09 15:55:21 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = 0;
	if (count > (UINT_MAX / size))
		return (NULL);
	mem = (void *)malloc(count * size);
	if (mem == 0)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
/*
int	main(void)
{
	printf("%s", ft_calloc(2, 2));
	return (0);
}*/
