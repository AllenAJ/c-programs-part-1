#include <stdio.h>
#include <conio.h>

void main()
{
  float area,s,r,l,b,base,height;
  int menu;
    printf("\t\tPROGRAM TO FIND AREA OF GEOMETRIC SHAPES");
  printf("\n\t\t-----------------------------");
  printf("\n1.sqaure\n2.circle\n3.rectangle\n4.triangle");
  printf("\nEnter your choice : ");
  scanf("%d",&menu);
  switch(menu){
    case 1 :{system("cls");
             printf("\nEnter the side of the square : ");
             scanf("%f",&s);
             area=s*s;
             break;
    }
    case 2 :{system("cls");
             printf("\nEnter the radius of the circle : ");
             scanf("%f",&r);
             area=3.14*r*r;
             break;
    }
    case 3 :{system("cls");
             printf("\nEnter the length and breadth of the square : ");
             scanf("%f %f",&l,&b);
             area=l*b;
             break;
    }
    case 4 :{system("cls");
             printf("\nEnter the base and heigth of the square : ");
             scanf("%f %f",&base,&height);
             area=0.5*base*height;
             break;
    }
    default : {
            printf("\ninvalid choice");
        }
  }
   printf("\nAREA IS %f",area);
        getch();
}
