#include<stdio.h>
int main()
{
    int n,p,a[5],i;
    printf("Enter the size of an Array");
    scanf("%d",&n);
    printf("Enter the no of an Array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter a no of an Array which you want to delete");
    scanf("%d",&p);
    if(p<0||p>n)
    {
        printf("Out of the range of an Array");
        return 0;
    }
    for(i=p+1;i<n;i++)
    a[i-1]=a[i];
    printf("the Elements are After delete a no");
    for(i=0;i<n-1;i++)
    printf("%4d",a[i]);
    return 0;
}
