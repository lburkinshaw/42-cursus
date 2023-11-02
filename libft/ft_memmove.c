/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:56:33 by lburkins          #+#    #+#             */
/*   Updated: 2023/11/01 09:56:55 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <string.h>
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dstptr;
    const unsigned char *srcptr;

    dstptr = dst;
    srcptr = src;
    if (dstptr == srcptr)
        return(dst);  
    if (srcptr < dstptr)
    {
        size_t  i;
        i = len;
        while (i > 0)
        {
            i--;
            dstptr[i] = srcptr[i];
        }    
    }
    else
    {
        size_t  i;
        i = 0;
        while (i < len)
        {
            dstptr[i] = srcptr[i];
            i++;
        }
    }
    return(dst);
}

int main(void)
{
    char str1[] = "Hello, World!";
    printf("Original String: %s\n", str1);

    ft_memmove(str1 + 3, str1, 9);
    printf("After Overlapping ft_memmove: %s\n", str1);

    // Resetting the string
    char str2[] = "Hello, World!";
    memmove(str2 + 3, str2, 9);
    printf("After Overlapping memmove: %s\n", str2);

    return 0;
}