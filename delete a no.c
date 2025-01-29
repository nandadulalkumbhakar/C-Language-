#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter the size of Array");
	scanf("%d",&n);
	int a[n];
    printf("Enter the Element %d",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the index to delete ");
    scanf("%d",&p);
    if(p<0 || p>=n)
    {
	printf("Out of range");
    return 0;
    }
    for(j=p+1;j<n-1;j++)
    a[j-1]=a[j];
    printf("The elements after deletion are");
    for(i=0;i<=n-2;i++)
    //for(i=0;i<=n-2;i++)
    printf("%5d",a[i]);
    return 0;
}
