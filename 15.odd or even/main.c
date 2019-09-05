#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
  printf("\t\tPROGRAM TO CHECK ODD OR EVEN");
  printf("\n\t\t-----------------------------");
  printf("\nEnter the number: ");
  scanf("%d",&n);
  if(n%2==0){
    printf("\nThe number is even");

  }
  else{
    printf("\nThe number is odd");
  }
getch();
}
