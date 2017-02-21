#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <math.h>
#include<string.h>
int step(int,int); //I?ioioei ooieoee (ii?ii oeacuaaou oieuei oei  
                   //oi?iaeuiuo ia?aiao?ia)
 main()
{ int x,y,p=1;
double z;
int v=2;
do
{
  printf(" Vvedite chislo x  i stepen y ");
  scanf("%d%d",&x,&y);
  printf(" ctepen ravna %d \n",y);
 if (y<0)
 {p=p+100;
 y=y*-1;
  printf("ctepen otricatelna\n");
 }
 
  z=step(x,y);  //Aucia ooieoee n oaeoe?aneeie ia?aiao?aie
  
  if (p>100) { z=1.00/z;
  printf("chislo=%d stepen=%d resultat=%lf",x,y,z);}
  else
  {
  printf("chislo=%d stepen=%d resultat=%lf",x,y,z);}
  getch();
  printf(" echo? Yes -3/3 No ");
  scanf("%d",&v);
} while (v<2);
}

int step(int a ,int b) //Caaieiaie ooieoee n oi?iaeuiuie ia?aiao?aie
{ int i;
double c=1;
   for (i=0;i<b;i++)
 {
 	c=c*a;
 }
  return c;
}
