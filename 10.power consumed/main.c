#include <stdio.h>
#include <conio.h>

void main()
{
   float amount,customer_num,u;
   printf("\t\tPROGRAM TO FIND AMOUNT OF POWER CONSUMED");
   printf("\n\t\t----------------------------------------");
   printf("\nEnter the consumer number: ");
   scanf("%f",&customer_num);
   printf("\nEnter the power used in units : ");
   scanf("%f",&u);
   if(u>=0 && u<=200){
        amount=u*0.50;
   }
   else if(u>=201.0 && u<=400.0){
        amount=((u-200.0)*0.65)+100.0;
   }
   else if(u>=401 && u<=600){
        amount=(u-400.0)*0.80+30;
   }
   else{
        amount=(u-600.0)+390.0;
   }
   printf("\nAmount of power consumed is %f",amount);
   getch();
}
