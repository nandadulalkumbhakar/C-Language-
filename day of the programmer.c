#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,leapYear,d,m,y,notLeapYear;
    scanf("%d",&n);
    if(n%100==0)
    {
        if(n%400==0)
            leapYear=n;
        else
            notLeapYear=n;
    }
    else
    {
        if(n%4==0)
            leapYear=n;
        else
            notLeapYear=n;
    }


    if(n==leapYear)
    {
        d=12;
        //d=256-(31+29+31+30+31+30+31+31);
        m=9;
        y=n;
    }
    else if(n==notLeapYear)
    {
        d=13;
        //d=256-(31+28+31+30+31+30+31+31);
        m=9;
        y=n;
    }
    printf("%d.0%d.%d",d,m,y);
}
