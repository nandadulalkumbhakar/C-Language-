#include<stdio.h>
#include<ctype.h>
int main()
{
    int n ;
    printf("Enter a character");
    scanf("%c",&n);
    n=toupper(n);
    if(n>='A'&&n<='Z')
        printf("%c is alphabet",n);
    else if(n>='0'&& n<='9')
        printf("%c is Digit",n);
    else
        printf("%c is special character",n);
    return 0;
}

