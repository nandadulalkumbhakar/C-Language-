#include<stdio.h>
void rectangularArea();
void squareArea();
void circleArea();
void menu();
int main()
{
    int ch;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            squareArea();
            break;
        case 2:
            rectangularArea();
            break;
        case 3:
            circleArea();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid your choice:-");
        }
    }
    return 0;
}
void squareArea()
{
    int area,l;
    printf("Enter the length of a square");
    scanf("%d",&l);
    area=l*l;
    printf("the area of a square is %d\n",area);
}
void rectangularArea()
{
    int area,l,d;
    printf("Enter the length of a rectangular");
    scanf("%d",&l);
    printf("Enter the width of a rectangular");
    scanf("%d",&d);
    area=l*d;
    printf("The area of a rectangular is %d",area);
}
void circleArea ()
{
    int r;
    float area;
    printf("Enter the radius of a circle:-");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of a circle is %f",area);
}
void menu()
{
    printf("\n");
    printf("\t the option are:-\n");
    printf("\t\t 1.square\n");
    printf("\t\t 2.rectangular\n");
    printf("\t\t 3.circle\n");
    printf("\t\t 4.Exit\n");
    printf("Enter your choice:-");
}
