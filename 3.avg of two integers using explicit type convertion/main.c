#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    float avg;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    avg=(float)(a+b)/2;
    printf("avg is %f",avg);
    getch();
}
