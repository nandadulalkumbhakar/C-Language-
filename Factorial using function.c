#include<stdio.h>
int isFact(int);
int main()
{
    int f,n;
    printf("Enter a no");
    scanf("%d",&n);
    f=isFact(n);
    printf("%d is factorial",f);
    return 0;
}
int isFact(int x)
{
    int i,f=1;
    for(i=1;i<=xss;i++)
        f=f*i;
    return f;
}
