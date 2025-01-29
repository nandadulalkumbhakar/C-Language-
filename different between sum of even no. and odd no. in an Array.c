#include<stdio.h>
int main()
{
    int n,sumEven=0,sumOdd=0,i,diff;
    printf("Enter the size of an Array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of an Array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            sumEven=sumEven+a[i];
            else
            sumOdd=sumOdd+a[i];
        }
        printf("sum of even no:%d\n",sumEven);
        printf("sum of odd no:%d\n",sumOdd);
        diff=sumEven-sumOdd;
        printf("%d",diff);
        return 0;
}
