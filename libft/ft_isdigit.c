/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:52:54 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/24 12:54:13 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <ctype.h>
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	my_function = ft_isdigit(c);
	actual_function = isdigit(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = 'g';
	my_function = ft_isdigit(c);
	actual_function = isdigit(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = '5';
	my_function = ft_isdigit(c);
	actual_function = isdigit(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	c = ' ';
	my_function = ft_isdigit(c);
	actual_function = isdigit(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	return (0);
}*/
