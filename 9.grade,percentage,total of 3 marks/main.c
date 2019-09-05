#include <stdio.h>
#include <conio.h>

void main()
{
    float a,b,c,total,percent;
    printf("Enter the marks of three subjects : ");
    scanf("%f %f %f",&a,&b,&c);
    total=a+b+c;
    percent=(total/150)*100;
    printf("Your total mark is %0.1f\n",total);
    printf("Your percentage is %0.1f%%\n",percent);
    if(percent>90){
        printf("Your grade is A");
    }
    else if(percent>80){
        printf("Your grade is B");
    }
      else if(percent>70){
        printf("Your grade is C");
      }
      else if(percent>60){
        printf("Your grade is D");
    }
    else{
        printf("you have failed");
    }
    getch();
}
