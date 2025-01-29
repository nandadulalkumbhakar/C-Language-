#include<stdio.h>
void square(int);
void main()
{
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    square(n);
    printf("In main %d\n",n);
}
void square(int x)
{
    printf("In function %d\n",x*x);
}

