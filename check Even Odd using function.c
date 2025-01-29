#include<stdio.h>
int isEven(int);
int main()
{
    int n,p;
    printf("Enter a no");
    scanf("%d",&n);
     p=isEven(n);
    {
        if(p==1)
    printf("%d is Even",n);

    else
    printf("%d is Odd",n);
    }
    return 0;
}
int isEven(int x)
{
   if(x%2==0)
   return 1;
  else
   return 0;
}
