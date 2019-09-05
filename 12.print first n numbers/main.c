#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i=1;
    printf("\t\tPROGRAM TO PRINT FIRST N NUMBERS");
    printf("\n\t\t-----------------------------");
    printf("\nEnter the number : ");
    scanf("%d",&n);
    while(i<=n){
        printf("\n%d",i);
        i++;
    }
    getch();
}
