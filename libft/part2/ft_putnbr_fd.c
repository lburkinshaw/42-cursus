/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:52:52 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/01 15:52:57 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);

void ft_putnbr_fd(int n, int fd)
{
    if (n == 2147483647)
    {
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
        ft_putnbr_fd(n/10, fd);
        ft_putnbr_fd(n%10, fd);
    }
    else
        ft_putchar_fd(n + 48, fd);
}

int main(void)
{
    int num;
    int file_des;

    num = 2147483647;
    file_des = 1;
    ft_putnbr_fd(num, file_des);
    return(0);
}