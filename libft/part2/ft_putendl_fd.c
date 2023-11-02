/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:25:41 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/01 15:29:10 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd);

void ft_putendl_fd(char *s, int fd)
{
	if (!s)
	//Handle the case where s is a null pointer
	return (0);
    else
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

int	main(void)
{
	char string[] = "Bladadibla bloop";
	int	fd = 1;
	ft_putendl_fd(string, fd);
	return(0);
}