/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_old.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:21 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/09 09:44:22 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (str[i] != 45)
	{
		while (str[i] != '\0')
		{
			if (str[i] < 48 || str[i] > 57)
				return (nb);
			else
			{
				nb = (nb * 10) + (str[i] - 48);
				i++;
			}
		}
	}
	else if (str[i] == 45)
	{
		i++;
		while (str[i] != '\0')
		{
			if ((str[i] < 48) || (str[i] > 57))
				return (nb);
			nb = (nb * 10) + (str[i] - 48);
			i++;
		}
		nb = 0 - nb;
	}
	return (nb);
}

int main (void)
{
	const char *string;

	string = "- 47sds";
	printf("MyCode: String is %s, Int is %d\n", string, ft_atoi(string));
	printf("RealCode: String is %s, Int is %d\n", string, atoi(string));
	return (0);
}