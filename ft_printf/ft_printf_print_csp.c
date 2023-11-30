/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_csp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:37:29 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/30 16:04:36 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(int c, int *check)
{
	if (*check == -1)
		return (0);
	if (write(1, &c, 1) == -1)
	{
		*check = -1;
		return (0);
	}
	return (1);
}

int	printstr(const char *str, int *check)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!str)
	{
		count += printstr("(null)", check);
		return (count);
	}
	while (str[i] != '\0')
	{
		count += printchar(str[count], check);
		i++;
	}
	return (count);
}

int	printptr(unsigned long int ptr, int *check)
{
	int	count;

	count = 0;
	if (!ptr)
		count += printstr("0x0", check);
	else
	{
		count += printstr("0x", check);
		count += printnbr_ptr(ptr, 'x', check);
	}
	return (count);
}
