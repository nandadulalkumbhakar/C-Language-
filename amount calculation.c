#include<stdio.h>
int main()
{
int n;
printf("Enter a amount");
scanf("%d",&n);
if(n=n/2000)
    {
        printf("2000=%d\n",n);
            n=n%2000;
         }
    else if(n=n/500)
        {
            printf("500=%d\n",n);
            n=n%500;
        }
    else if(n=n/200)
        {
            printf("200=%d\n",n);
            n=n%200;
        }
    else if(n=n/100)
        {
            printf("100=%d\n",n);
            n=n%100;
        }
     else if(n=n/50)
        {
            printf("50=%d/n",n);
            n=n%50;
        }
        if(n=n/20)
        {
            printf("20=%d\n",n);
            n=n%20;
        }
        if(n=n/10)
        {
            printf("10=%d/n",n);
            n=n%10;
        }
        if(n=n/5)
        {
            printf("5=%d\n",n);
            n=n%5;
        }
        if(n=n/2)
        {
            printf("2=%d",n);
            n=n%2;
        }
        if(n=n/1)
        {
            printf("1=%d\n",n);
            n=n%1;
        }
        return 0;
}







