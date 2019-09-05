#include <stdio.h>
#include <conio.h>

void main()
{
    float l,b,area;
    printf("Enter the length and breadth of the rectangle : ");
    scanf("%f %f",&l,&b);
    area=l*b;
    printf("The area of the rectangle is %f",area);
    getch();
}
