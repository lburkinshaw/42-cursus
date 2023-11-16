/* ************************************************************************** */
/*	                                                                        */
/*	                                                    :::      ::::::::   */
/*   ft_strnstr.c	                                   :+:      :+:    :+:   */
/*	                                                +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>	      +#+  +:+       +#+        */
/*	                                            +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:02:21 by lburkins	      #+#    #+#             */
/*   Updated: 2023/11/06 12:10:41 by lburkins         ###   ########.fr       */
/*	                                                                        */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (needle == haystack)
		return (h);
	if (!haystack && len == 0)
		return (NULL);
	if (!needle && ft_strlen(needle) == 0)
		return (h);
	while (h[i] && i <= len && (ft_strlen(n) <= (len - i)))
	{
		if (ft_strncmp(h + i, n, ft_strlen(n)) == 0)
			return (h + i);
		else
			i++;
	}
	return (0);
}
