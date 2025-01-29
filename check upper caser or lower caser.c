#include<stdio.h>
int main()
{
    int n;
    printf("Enter a character:-N");
    scanf("%c",&n);
    if(n>='A'&&n<='Z')
        printf("upper caser");
    if(n>='a'&&n<='z')
        printf("lower caser");
    return 0;
}
