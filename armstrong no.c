#include<stdio.h>
#include<math.h>
int main()
{
int rem,c=0,n,t,sum=0;
printf("Enter a no which you want to check Armstrong no or not");
scanf("%d",&n);
for(t=n;t>0;c++,t=t/10);
//printf("digit=%d\n",c);
t=n;
while(t>0)
{
    rem=t%10;
    sum=sum+pow(rem,c);
    t=t/10;
}
if(sum==n)
    printf("%d is Armstrong no",n);
else
    printf("%d is not Armstrong no",n);
return 0;
}











