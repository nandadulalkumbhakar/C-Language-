#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int descendingOrder(int arr[],int n)
{
    int i,j,countD = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                countD++;
            }
        }
    }
    return countD;

}
int ascendingOrder(int arr[],int n)
{
    int i,j,countA=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                countA++;
            }
        }
    }
    return countA;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        b[i]=arr[i];
    }
    int countA=ascendingOrder(arr,n);
    int countD=descendingOrder(b,n);
    if(countA < countD)
    {
        printf("%d",countA);
    }
    else
        printf("%d",countD);

}
