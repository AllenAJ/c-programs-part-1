#include <stdio.h>
#include <conio.h>

void main()
{
     int m,n;
  printf("\t\tPROGRAM TO SWAP VARIABLE WITHOUT USING TEMP");
  printf("\n\t\t-----------------------------");
  printf("\nEnter the variables : ");
  scanf("%d %d",&m,&n);
  m=m+n;
  n=m-n;
  m=m-n;
    printf("\nafter swaping first variable is%d",m);
  printf("\nafter swaping second variable is%d",n);
  getch();
}
