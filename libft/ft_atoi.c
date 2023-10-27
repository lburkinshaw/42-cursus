/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:37:21 by lburkins          #+#    #+#             */
/*   Updated: 2023/10/25 17:25:43 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//function to convert string argument to an integer and return it.
int	ft_atoi(const char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	if (str[i] != 45)// if not negative (-).
	{
		while (str[i] != '\0')// until end of string. 
		{
			if (str[i] < 48 || str[i] > 57)// if not digit.
				return (nb);// return number so far (up to non-digit character)
			else
			{
				nb = (nb * 10) + (str[i] - 48);//convert each char to int.
				i++;
			}
		}	
	}
	else if (str[i] == 45)// if negative (-).
	{
		i++;//move past - to first char.
		while (str[i] != '\0')
		{
			if ((str[i] < 48) || (str[i] > 57))// if not digit.
				return (nb);// return number so far (up to non-digit character)

			else
			{
				nb = (nb * 10) + (str[i] - 48);//convert each char to int.
				i++;
			}
		}
		nb = 0 - nb;//make negative.
	}
	return (nb);
}

int main (void)
{
	const char *string;

	string = "1abc";
	printf("MyCode: String is %s, Int is %d\n", string, ft_atoi(string));
	printf("RealCode: String is %s, Int is %d\n", string, atoi(string));
	return (0);
}
