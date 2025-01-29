#include<stdio.h>
int binarySearch(int a[],int n,int k)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]==k)
            return mid;
        if(a[mid]<k)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
int main()
{
    int n,k;
    printf("Enter number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number in ascending order: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a number which you want to search: ");
    scanf("%d",&k);
    int p=binarySearch(a,n,k);
    if(p==-1)
        printf("not found");
    else
        printf("Index number is %d",p);
    return 0;
}

