/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:06:14 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/30 17:11:30 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd)
{
	if (!s)
	//Handle the case where s is a null pointer
	return (0);
	else
	{

		int i;
		i = 0;

		while (s[i] != '\0')
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
/*
int	main(void)
{
	char string[] = "Bladadibla bloop";
	int	fd = 1;
	ft_putstr_fd(string, fd);
	return(0);
}
*/