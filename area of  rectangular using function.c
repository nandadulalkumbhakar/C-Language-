#include<stdio.h>
int area(int,int);
int main()
{
    int a,b,c;
    printf("Enter length and width");
    scanf("%d%d",&a,&b);
    c=area(a,b);
    printf("area of rectangular=%d",c);
    return 0;
}
int area(int x,int y)
{
    int z;
    z=x*y;
    return z ;
}
