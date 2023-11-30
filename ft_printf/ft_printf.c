/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:13:48 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/30 15:55:05 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		count;
	int		check;

	check = 0;
	va_start(args, format);
	count = iterate(format, args, &check);
	va_end(args);
	if (check == -1)
		return (-1);
	return (count);
}

int	iterate(const char	*format, va_list	args, int	*check)
{
	int	temp_rtn;
	int	count;

	count = 0;
	while (*format)
	{
		temp_rtn = 0;
		if (*format != '%')
			temp_rtn = printchar(*format, check);
		else
			temp_rtn = execute_fmt(*++format, args, check);
		count += temp_rtn;
		format++;
	}
	return (count);
}

int	execute_fmt(const char specifier, va_list args, int *check)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count = printchar(va_arg(args, int), check);
	else if (specifier == 's')
		count = printstr(va_arg(args, const char *), check);
	else if (specifier == 'p')
		count = printptr((unsigned long int)va_arg(args, void *), check);
	else if (specifier == 'd' || specifier == 'i')
		count = printnbr_diu(va_arg(args, int), check);
	else if (specifier == 'u')
		count = printnbr_diu(va_arg(args, unsigned), check);
	else if (specifier == 'x' || specifier == 'X')
		count = printnbr_hex(va_arg(args, unsigned int), specifier, check);
	else if (specifier == '%')
		count = printchar('%', check);
	else
		return (-1);
	return (count);
}

/*int    main(void)
{
    ft_printf("(ft) %c \n", '0');
    printf("(std) %c \n", '0');
    ft_printf("(ft)Number(u): %u\n(ft)Number(u): %u\n", 2147483647, -10);
    printf("(std)Number(u): %u\n(std)Number(u): %u\n", 2147483647, -10);
    ft_printf("(ft)%i %%%c %i%%\n", 0x52, 'a', -50);
    printf("(std)%i %%%c %i%%\n", 0x52, 'a', -50);
    ft_printf("(ft)%x, %X\n", 3500, -3500);
    printf("(std)%x, %X\n", 3500, -3500);
    ft_printf("(ft)%p, %p \n", "blanla", NULL);
    printf("(std)%p, %p \n", "blanla", NULL);
    ft_printf("\n(ft)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
    printf("\n(std)%%%%%%%%%d, %%%s\n", INT_MIN, "string%%%");
    //ft_printf("%s%w (ft)\n", "aaaaaa"); // works without compiler flags
    //printf("%s%w (std)\n", "aaaaaa"); // works without compiler flags
    return (0);
}*/
/*int	main(void)
{
	int	count1 = 0;
	int	count2 = 0;
//	int value = 42;

	count1 = ft_printf("Long max: %x\n", LONG_MAX);
	//	%x\nPtr: %p\n", 'a', "bla", -123, 1235, "hello");
	printf("%d\n", count1);
	count2 = printf("Long max: %x\n", LONG_MAX);
//	%x\nPtr: %p\n", 'a', "bla", -123, 1235, "hello");
	printf("%d\n", count2);
//	count += ft_printf("%u\n", -123);
	//count += ft_printf("Hex_up: %X, Hex_low: %x\n", 56789, 56789);
	//count += ft_printf("Decimal: %d\nInt: %i\n, UInt: %u\n", -1, 1, 123);//31
//	count += ft_printf("Percent sign: %%d test");
	//printf("Characters printed should be 35, and is = %d\n", count);
//	printf("%u\n", -123);
	//printf("%X, %x\nABCD", 56789, 56789);
//	ft_printf("pointer: %p\n", &value);
//	printf("pointer: %p\n", &value);
	return (0);
}*/
