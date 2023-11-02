/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:59:47 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/01 16:59:50 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
    char *str;
    int i;
    int len;
    int remainder;
    bool    isNeg;

    len = 0;
    isNeg = false;
    while (n > 0)
    {   len++;
        n = n/10;
    }
    str = (char *)malloc((len + 1) * sizeof(char));
    if (str == 0)
    { 
        str[i] = '0';
        str[i + 1] = '\0';
        return (str);
    }
        
    
    {
/*        if (n == 2147483647)
        {
            str = "212147483647";
        }*/
        i = 0;
    if (n < 0)
    {
        n = -n;
        isNeg = true;
    }  
    while (n !=0)
    {
        remainder = n % 10;
        if (remainder > 9)
        {   
            str[i] = (remainder - 10) + 'a';//why???????
            i++;
        }
        else
        {   
            str[i] = remainder + '0';
            i++;
        }
        n = n / base
    }
    if (isNeg)
    {    str[i] = '-';
        i++;
    }
    str[i] = '\0';
    
            else if (n > 9)
        {
            ft_itoa(n/10);
            ft_itoa(n%10);
        }
        else
        {   str[i] = n + 48;
            i++;
        }
    str[i] = '\0';
    return(str);
    }
}
int main(void)
{
    int num;
    int temp_num;
    int len;
    num = 2147483647;
    char *s = ft_itoa(num);
    printf("%s", s);
    return(0);
}