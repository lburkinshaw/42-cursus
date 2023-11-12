/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:21:39 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/06 12:58:18 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
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
	my_function = ft_isalnum(c);
	actual_function = isalpha(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	
	c = 'g';
	my_function = ft_isalnum(c);
	actual_function = isalnum(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);

	c = '5';
	my_function = ft_isalnum(c);
	actual_function = isalnum(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
 
	c = ' ';
	my_function = ft_isalnum(c);
	actual_function = isalnum(c);	
	printf("My function: %d. Actual function: %d\n", my_function, actual_function);
	return (0);
}*/
