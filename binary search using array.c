#include<stdio.h>
int binarySearch(int a[],int l,int r,int k)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==k)
            return mid;
        if(a[mid]>k)
            r=mid-1;
        else
            l=mid+1;
    }
        return -1;
}
int main()
{
    int n,i,k;
    printf("Enter number of element: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a number which you want to search");
    scanf("%d",&k);
    int p=binarySearch(a,0,n-1,k);
    if(p==-1)
        printf("Not found");
    else
        printf("Index number is %d",p);
    return 0;
}
