/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:02:48 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/09 16:49:37 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;
	char	*source;

	source = (char *)s1;
	len = ft_strlen(source);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, source, len + 1);
	return (dest);
}
/*
int	main(void)
{
	char	*dest;

	dest = ft_strdup("Hello");
	printf("%s", dest);
	return (0);
}*/