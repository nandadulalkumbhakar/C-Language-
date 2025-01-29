#include<stdio.h>
int isPrime(int);
int main()
{
    int n,p;
    printf("Enter a no");
    scanf("%d",n);
    p=isPrime(n);
    if(p==1)
        printf("%d is prime no",p);
        else
    printf("%d is composite no",p);
    return 0;
}
int isPrime(int n)
{
      int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int isEmirp(int n)
{   int p,rem ,rev=0;;
p=isPrime(n);
if(p==1)
    //int rem ,rev=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
printf("%d is emirp no",rev);
    return 0;
}





