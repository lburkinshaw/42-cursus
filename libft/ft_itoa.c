/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:12:12 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/10 12:12:21 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	howlong(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtnstr;
	int		i;

	len = howlong(n);
	rtnstr = (char *)malloc((len + 1) * sizeof(char));
	if (rtnstr == 0)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		rtnstr[0] = '-';
	}
	i = len;
	while (n > 0)
	{
		rtnstr[len-- -1] = (n % 10) + '0';
		n = n / 10;
	}
	rtnstr[i] = '\0';
	return (rtnstr);
}
/*int main(void)
{
   int num1 = 1234;
   int num2 = -1234;
   int num3 = -2147483648;
   int num4 = 2147483647;
	
	char *s1 = ft_itoa(num1);
	char *s2 = ft_itoa(num2);
	char *s3 = ft_itoa(num3);
	char *s4 = ft_itoa(num4);

	printf("Int %d is string %s\n", num1, s1);
	printf("Int %d is string %s\n", num2, s2);
	printf("Int %d is string %s\n", num3, s3);
	printf("Int %d is string %s\n", num4, s4);
	return(0);
}
*/