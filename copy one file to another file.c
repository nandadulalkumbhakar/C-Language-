#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("nanda.txt","r");
    if(fp1==NULL)
    {
        printf("Error opening the file");
        exit(0);
    }
    fp2=fopen("f3.txt","w");
    if(fp2==NULL)
    {
        printf("Error opening the file");
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=getc(fp1);
        putc(ch,fp2);
    }
    fclose(fp1);+
    fclose(fp2);
}
