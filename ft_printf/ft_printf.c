/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:13:48 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/29 10:09:58 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		rtn;
	int		temp_rtn;

	rtn = 0;
	va_start(args, format);
	while (*format)
	{
		temp_rtn = 0;
		if (*format != '%')
			temp_rtn = putchar(*format);
		else
		{
			temp_rtn = execute_fmt(*++format, args);
			if (temp_rtn == -1)
			{
				va_end(args);
				return (-1);
			}
		}
		rtn += temp_rtn;
		format++;
	}
	va_end(args);
	return (rtn);
}

int	putchar(int c)
{
	//if fails, return -1.
	write(1, &c, 1);
	return (1);
}

int	main(void)
{
	ft_printf("%c\n%s\n%i\n", 'a', "bla", -1256412);
	return (0);
}