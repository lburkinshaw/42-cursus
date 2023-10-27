/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:05:44 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/24 15:15:27 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int		c;
	int		my_function;
	int		actual_function;

	c = 'G';
	my_function = ft_isprint(c);
	actual_function = isprint(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = '5';
	my_function = ft_isprint(c);
	actual_function = isprint(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = ' ';
	my_function = ft_isprint(c);
	actual_function = isprint(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = 128;
	my_function = ft_isprint(c);
	actual_function = isprint(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	return (0);
}*/
