#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    printf("Enter a no");
    scanf("%c",&n);
    {
        n=toupper(n);
        if(n >= 'A'&&n <= 'Z')
            printf("character");
            else if(n>='0'&&n<='9')
                printf("%c is digit",n);
            else
                printf("%c is special character",n);
    }

    return 0;
}
