#include<stdio.h>
int main()
{
    char a[100];
    int i;
    printf("Enter Asansol Engineering College:-");
    scanf("%[^\n]d",a);
    for(i=0;a[i]!='\0';i++)
        if(i==0)
        printf("%c",a[i]);
        else if(a[i]==32)
        printf("%c",a[i+1]);
    return 0;
}
