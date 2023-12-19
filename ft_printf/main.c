/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:31:00 by lburkins          #+#    #+#             */
/*   Updated: 2023/12/01 15:57:30 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{	
	int count;
	int count2;
	
	ft_printf("(ft) %c \n", '0');
	printf("(std) %c \n", '0');
	ft_printf("(ft)Number(u): %u\n(ft)Number(u): %u\n", 2147483647, -10);
	printf("(std)Number(u): %u\n(std)Number(u): %u\n", 2147483647, -10);
	ft_printf("(ft)%i %%%c %i%%\n", 0x52, 'a', -50);
	printf("(std)%i %%%c %i%%\n", 0x52, 'a', -50);
	ft_printf("(ft)%x, %X\n", 3500, -3500);
	printf("(std)%x, %X\n", 3500, -3500);
	count = ft_printf("(ft)%p, %p \n", "blanla");
	count2 = ("(std)%p, %p \n", "blanla");
	printf ("count %d\n", count);
	printf ("count2 %d\n", count2);
	ft_printf("\n(ft)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
	printf("\n(std)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
	ft_printf("(ft) %c %blA \n", '0');
	return (0);
}
