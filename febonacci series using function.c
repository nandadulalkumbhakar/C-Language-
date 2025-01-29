#include<stdio.h>
void febonacci(int);
int main()
{
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    febonacci(n);
    return 0;
}
void febonacci(int x)
{
    int n1=0,n2=1,n3,i;
    printf("%4d",n1);
    printf("%4d",n2);
    for(i=2;i<x;i++)
    {
        n3=n1+n2;
        printf("%4d",n3);
        n1=n2;
        n2=n3;
    }
}
