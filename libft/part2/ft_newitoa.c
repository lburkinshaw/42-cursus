


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int howLong(n)
{
    run howLong to know how much space and to use for iteration (from end to start)
    malloc to allocate memory space based on length
    if n is max/min int, return number of digits
    if (n < 0), make positive and add one??
}

char *ft_itoa(int n)
{
    int len; // make seperate function to calculate length of number (inc, if highest/lowest)
    char *rtnstr;
    int i;
    
    len = howLong(n);
    rtnstr = (char *)malloc((len + 1) * sizeof(char));
    
    if (n < 0)
        rtnstr[0] = '-';//if negative, place '-' in position 0, convert to positive.
    i = len;
    while (n > 9)// while doesnt equal 0??
    {
        rtnstr[i--] = (n % 10) + '0';
        n =/ 10;
    }     


    return(rtnstr);
}