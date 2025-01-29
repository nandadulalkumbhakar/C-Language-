#include<stdio.h>
#include<string.h>
int main()
{
    int ss1=0,ss2=0;
    char s1[1000],s2[1000];
    scanf("%[^\n]s",s1);
    ss1=strlen(s1);
    fflush(stdin);
    scanf("%[^\n]s",s2);
    ss2=strlen(s2);
    if(ss1>ss2)
        printf("Ashok");
    else if(ss1==ss2)
        printf("Draw");
    else
    printf("Anand");
}
