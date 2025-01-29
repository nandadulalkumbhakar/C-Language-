#include <stdio.h>
int main() 
{ int i,j,n,t;
printf("Enter the size of Array");
scanf("%d",&n);
int a[n];
printf("Enter the no");
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    scanf("%d",&a[n]);
}
for(i=0;i<n-1;i++)
{
    for(j=0;j<n-1;j++)
    if(a[j]>a[j+1])
    {
        t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
}
for(i=0;i<n-1;i++)
{for(j=0;j<n-1;j++)
printf("%d\n",a[n]);
}

    return 0;
}
