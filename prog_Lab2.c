#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void vivod(int *a, int k, bool bNegative); 

int main()
{ int a[100], i;
  for(i=0; i<100; i=i++) 
   {

    a[i] = rand() % 90 + (-37)
;
    
    printf("%d\n",a[i]);
  }
  vivod(a,0,true);
  vivod(a,0,false);
  getch();
}

void vivod(int *a, int k, bool bNegative)
{ 
  if (a[k]) {
     if (bNegative && a[k]<0) printf(" Otricatelnoe %d ", a[k]);
     if (!bNegative && a[k]>0) printf(" polojitelnoe %d  ", a[k]);
     vivod(a,k+1,bNegative);
}
  }