#include<stdio.h>
int main()
{
	int n;
	printf("Enter a age");
	scanf("%d",&n);
	if(n>=18)
	printf("%d is adult",n);
	else
	printf("%d is minor",n);
	return 0;
}
