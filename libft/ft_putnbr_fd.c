/* ************************************************************************** */
/*                                                                        */
/*                                                    :::      ::::::::   */
/*   ft_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>    +#+  +:+       +#+        */
/*                                            +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:52:52 by lburkins      #+#    #+#             */
/*   Updated: 2023/11/06 11:48:39 by lburkins         ###   ########.fr       */
/*                                                                        */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}
