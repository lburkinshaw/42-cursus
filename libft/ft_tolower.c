/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:53:47 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/06 12:34:57 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}
/*
int	main(void)
{
	char	lower;
	char	upper;
	
	lower = 'a';
	upper = 'B';

	printf("My function: %c to %c\n", lower, ft_tolower(lower));
	printf("My function: %c to %c\n", upper, ft_tolower(upper));
	return (0);
}*/
