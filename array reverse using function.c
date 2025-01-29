#include<stdio.h>
void rev(int a[],int n);
int main()
{
    int n,i;
    printf("Enter the size of an array:- ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element of an array:- ",i+1);
        scanf("%d",&a[i]);
    }
    rev(a,n);
}
void rev(int a[],int n)
{
    int i,first_Element,last_Element;
    for(i=0;i<n/2;i++)
    {
        first_Element=a[i];
        last_Element=a[n-i-1];
        a[i]=last_Element;
        a[n-i-1]=first_Element;
    }
    for(i=0;i<n;i++)
    {
        printf("After reverse %d element:- ",i+1);
        printf("%d",a[i]);
        printf("\n");
    }
}
