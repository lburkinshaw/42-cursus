/* ************************************************************************** */
/*		                                                                    */
/*		                                                :::      ::::::::   */
/*   ft_atoi_new.c		                              :+:      :+:    :+:   */
/*		                                            +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>		  +#+  +:+       +#+        */
/*		                                        +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:24:17 by lburkins		  #+#    #+#             */
/*   Updated: 2023/11/08 16:59:22 by lburkins         ###   ########.fr       */
/*		                                                                    */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	isneg;

	i = 0;
	nb = 0;
	isneg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}
/*
int main (void)
{
	const char *string;

	string = "469";
	printf("MyCode: String is %s, Int is %d\n", string, ft_atoi(string));
	printf("RealCode: String is %s, Int is %d\n", string, atoi(string));
	return (0);
}*/
