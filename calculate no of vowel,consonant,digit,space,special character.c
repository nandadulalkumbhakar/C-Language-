#include<stdio.h>
int main()
{
    int i,p,vowel=0,consonant=0,space=0,digit=0,sc=0;
    char a[100];
    printf("Enter a string:-");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        p=a[i];
        p=toupper(p);
    if(p=='A'||p=='E'||p=='I'||p=='O'||p=='U')
            vowel++;
        else if(p>='A' && p<='Z')
            consonant++;
        else if(p==32)
            space++;
        else if(p>='0' && p<='9')
            digit++;
        else
            sc++;
    }
    printf("vowel=%d\n",vowel);
    printf("consonant=%d\n",consonant);
    printf("space=%d\n",space);
    printf("digit=%d\n",digit);
    printf("sc=%d\n",sc);
    return 0;
}
