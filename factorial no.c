#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter a no");
	scanf("%d",&n);
	if(n<0)
	printf("negative no can not a factorial no");
else
{
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial of %d is",fact);
}
return 0;
}
