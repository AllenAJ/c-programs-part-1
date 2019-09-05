#include <stdio.h>
#include <conio.h>

void main()
{
    int days;
    printf("\t\tPROGRAM TO PRINT DAY OF A WEEK");
    printf("\n\t\t-----------------------------");
    printf("\nEnter the number : ");
    scanf("%d",&days);
    switch(days){
        case 1:{ system("cls");
                 printf("\nThe day is sunday");
                 break;

        }
         case 2:{ system("cls");
                 printf("\nThe day is monday");
                 break;

        } case 3:{system("cls");
                 printf("\nThe day is tuesday");
                 break;

        } case 4:{system("cls");
                 printf("\nThe day is wednesday");
                 break;

        } case 5:{system("cls");
                 printf("\nThe day is thursday");
                 break;

        } case 6:{system("cls");
                 printf("\nThe day is friday");
                 break;

        } case 7:{system("cls");
                 printf("\nThe day is saturday");
                 break;
           default:{printf("\ninvalid choice");
                    }

        }
    }
    getch();
}
