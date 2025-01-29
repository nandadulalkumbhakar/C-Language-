#include<stdio.h>
#include<math.h>
int main()
{
    int rem,digit,n,c,t,sum=0,i;
    printf("Enter a no");
    scanf("%d",&n);
    t=n;
    for(t=n;t>0;t=t/10)
        digit++;
    printf("digit=%d\n",digit);
    t=n;
    while(t>0)
    {
        rem=t%10;
        sum=sum+pow(rem,digit);
        t=t/10;
    }
    if(sum==n)
        printf("%d is armstrong no",n);
    else
        printf("%d is not armstrong no",n);
    return 0;
}
