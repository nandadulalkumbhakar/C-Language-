#include<stdio.h>
int main()
{
    int n,a,d,s,i;
    printf("Enter 1st term and common difference");
    scanf("%d%d",&a,&d);
    printf("Enter which no of term you want to write");
    scanf("%d",&n);
    for(i=1,s=a;i<=n;i++,s=s+d)
    printf("%d\n",a+(i-1)*d);
    return 0;




}
