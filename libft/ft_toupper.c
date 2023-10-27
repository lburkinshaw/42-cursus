/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:39:29 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/25 15:02:06 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
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

	printf("My function: %c to %c\n", lower, ft_toupper(lower));
	printf("My function: %c to %c\n", upper, ft_toupper(upper));
	return (0);
}*/
