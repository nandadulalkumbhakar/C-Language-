#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("Enter the size of an Array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("After reverse the element are\t");
   for(i=n-1;i>=0;i--)
   //for(i=0;i<n;i++)
    {
        //printf("After reverse the element are");
        printf("%d\t",a[i]);
    }
    return 0;
}




