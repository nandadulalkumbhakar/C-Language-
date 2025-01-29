#include<stdio.h>
int main()
{
    int a,b,c;//sum,sub,mul,div;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("1.sum\n 2.sub\n 3.mul\n 4.div\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1: //sum=a+b;
        printf("add=%d",a+b);
        break;
        case 2: //sub=a-b;
        printf("sub=%d",a-b);
        break;
        case 3: //mul=a*b;
        printf("mul=%d",a*b);
        break;
        case 4: //div=a/b;
        printf("div=%lf",(double)a/b);
        break;
    }
    return 0;
}








