#include<stdio.h>
#include<string.h>
char stringReverse(int *a,int size)
{
    int i;
    char b[100];
    printf("%d",size);
    for(i=0;a[i]!='\0';i++)
    {
        a[size-1-i]=a[i];
        size--;
    }
    return a;
}
int main()
{
    int size=0,i;
    char a[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
        size++;
    stringReverse(a,size);
    //for(i=0;a[i]!='\0';i++)
        printf("%s",a);
}
