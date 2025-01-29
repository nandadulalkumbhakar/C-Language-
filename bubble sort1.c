#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of an array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Before sorting the array is: ");
    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    printf("\nAfter sorting the array are: ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
