/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_fmt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:37:29 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/29 10:03:05 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	execute_c(int c)
{
	putchar(c);
	return (1);
}

int	execute_fmt(const char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = execute_c(va_arg(args, int));
	else if (specifier == 's')
		count = execute_s(va_arg(args, const char *));
	/*else if (specifier == 'p')
		count = execute_c(va_arg(args, int));*/
	else if (specifier == 'd' || specifier == 'i')
		count = execute_d_i(va_arg(args, int));
	/*else if (specifier == 'i')
		count = execute_i(va_arg(args, int));
	else if (specifier == 'u')
		count = execute_u(va_arg(args, int));
	else if (specifier == 'x')
		count = execute_xlower(va_arg(args, int));
	else if (specifier == 'X')
		count = execute_xupper(va_arg(args, int));
	else if (specifier == '%')
		count = execute_%(va_arg(args, int));
	else
		return (-1);*/
	return (count);
}

int	execute_s(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	return (i);
}

int	execute_d_i(int n)
{
//send to separate putnbr function??
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += putchar('-');
		i += putchar('2');
		i += execute_d_i(147483648);
	}
	else if (n < 0)
	{
		i = putchar('-');
		n = -n;
		i += execute_d_i(n);
	}
	else if (n > 9)
	{
		i += execute_d_i(n / 10);
		i += execute_d_i(n % 10);
	}
	else
		i += putchar(n + 48);
	return (i);
}

