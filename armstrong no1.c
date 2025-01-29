#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,digit=0,rem,sum=0;
    printf("Enter a no");
    scanf("%d",&n);
    t=n;
    for(t=n;t>0;digit++,t=t/10);
    t=n;
    while(t>0)
    {
        rem=t%10;
        sum=sum+pow(rem,digit);
        t=t/10;
    }
    if(n==sum)
        printf("%d is Armstrong no",n);
    else
        printf("%d is not Armstrong no",n);
    return 0;
}
