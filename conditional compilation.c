#include<stdio.h>
//#define max
void main()

{
    int a,b;
    #ifdef max
    printf("\n Enter 1st no");
    scanf("%d",&a);
    printf("\n Enter 2nd no");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greatest ",a);
    }
    else
    {
        printf("%d is gratest ",b);
    }
    #else
    printf("\n Enter 1st num");
    scanf("%d",&a);
    printf("\n Enter 2ndt num");
    scanf("%d",&b);
    if(a<b)
    {
        printf("%d is smallest ",a);
    }
    else
    {
        printf("%d is smallest ",b);
    }
    #endif
}
