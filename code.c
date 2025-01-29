#include<stdio.h>
#include<string.h>
int main()
{
    int ss1,ss2;
    char s1[10000],s2[10000];
    scanf("%[^\n]s",s1);
    fflush(stdin);
    scanf("%[^\n]s",s2);
    ss1=strlen(s1);
    ss2=strlen(s2);
    if(ss1>ss2)
    {
        printf("Ashok");
    }
    else if(ss1<ss2)
    {
        printf("Anand");
    }
    else
        printf("Draw");
}
