#include<stdio.h>
#include<ctype.h>
int main()
{
    char n;
    printf("Enter a character:-");
    scanf("%c",&n);
    n=toupper(n);
    if(n>='A' && n<='Z')
        printf("%c is a character",n);
        else if(n>='0' && n<='9')
            printf(" %c is digit",n);
        else
            printf("%c is a special character",n);

        return 0;
}
