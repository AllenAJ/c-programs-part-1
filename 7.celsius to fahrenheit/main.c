#include <stdio.h>
#include <conio.h>

void main()
{
    float a,c;
    printf("Enter the temperature in celsius: ");
    scanf("%f",&a);
    c=(a*1.8)+32;
    printf("Fahrenheit=%f",c);
    getch();
}
