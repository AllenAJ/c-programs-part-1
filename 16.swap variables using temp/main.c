#include <stdio.h>
#include <conio.h>

void main()
{
 int m,n,temp;
    printf("\t\tPROGRAM TO SWAP VARIABLE USING TEMP");
  printf("\n\t\t-----------------------------");
  printf("\nEnter the variables : ");
  scanf("%d %d",&m,&n);
  temp=m;
  m=n;
  n=temp;
  printf("\nafter swaping first variable is%d",m);
  printf("\nafter swaping second variable is%d",n);
  getch();
}
