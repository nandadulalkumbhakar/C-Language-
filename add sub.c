#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter 2 nos");
    scanf("%d%d",&a,&b);
    printf("\n 1 add\n");
    printf("2. sub\n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("%d",a+b);
    default:
        //printf("invalid 1");
        //break;
    case 2:
        printf("\n%d",a-b);
    //default:
        //printf("invalid2");
        //break;
    //default:
        //printf("invalid");
        //break;
    }
    return 0;
}
