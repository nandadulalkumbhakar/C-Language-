#include<stdio.h>
float convert(int);
int main()
{
    int c;
    float p;
    printf("Enter a temparature in celsius unit:-");
    scanf("%d",&c);
    p=convert(c);
    printf("Temparature in farenheit unit %f\n",p);
    return 0;
}
float convert(int x)
{
    float f;
    f=(x*1.8)+32;
    return f;
}
