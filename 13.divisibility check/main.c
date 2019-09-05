#include <stdio.h>
#include <conio.h>

void main()
{
  int n,m;
  printf("\t\tPROGRAM TO PRINT FIRST N NUMBERS");
  printf("\n\t\t-----------------------------");
  printf("\nEnter the numbers: ");
  scanf("%d %d",&n,&m);
  if(n%m==0){
    printf("\n%d is divisible by %d",n,m);
  }
  else {
        printf("\n%d is not divisible by %d",n,m);
  }
  getch();
}
