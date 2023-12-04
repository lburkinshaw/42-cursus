/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:33:36 by lburkins          #+#    #+#             */
/*   Updated: 2023/12/01 12:03:35 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char	*format, ...);
int	iterate(const char *str, va_list	args, int *check);
int	execute_fmt(const char specifier, va_list args, int *check);
int	printchar(int c, int *check);
int	printstr(const char *str, int *check);
int	printnbr_diu(long n, int *check);
int	printnbr_hex(unsigned int n, const char upper_lower, int *check);
int	printnbr_ptr(unsigned long int n, int *check);
int	printptr(unsigned long int ptr, int *check);

#endif