/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:50:28 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/16 15:04:36 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = 0;
	if ((count * size) > SIZE_MAX)
		return (NULL);
	mem = (void *)malloc(count * size);
	if (mem == 0)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
