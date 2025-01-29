#include<stdio.h>
#include<stdlib.h>
void insertionSort(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(k<=a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}
int main()
{
    int n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    insertionSort(a,n);
    printf("\n After sorting the element are: ");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

