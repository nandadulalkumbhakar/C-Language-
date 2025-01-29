#include<stdio.h>
void square(int*);
int main()
{
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    square(&n);
    printf("In main %d\n",n);
}
void square(int *x)
{
    *x=(*x)*(*x);
    printf("In function %d\n",*x);
}

