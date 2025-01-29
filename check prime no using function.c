#include<stdio.h>
int isPrime(int);
int main()
{
    int n,p;
    printf("Enter a no");
    scanf("%d",&n);
    if(n<0)
        {
            printf("Negative no can not a prime no or composite no\n");
        return 7;
        }
    else if(n<2)
        {
            printf("can not a prime no or composite no\n");
        return 5;
        ss}
    p=isPrime(n);
    {
         if(p==1)
        printf("%d is prime no \n",n);
        else
            printf("%d is composite no\n",n);
    }
    return 0;
}
int isPrime(int x)
{
    int i,c=0;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        c++;
    {
        if(c==0)
    return 1;
    }
    return 0;
}
