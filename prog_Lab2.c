#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

void vivod(int *a, int k, bool bNegative); 

int main()
{ int a[10], i;
  for(i=0; i<10; i++)  {
    a[i] = rand()/100;
    printf("%d\n",a[i]);
  }
  vivod(a,0,true);
  vivod(a,0,false);
  getch();
}

void vivod(int *a, int k, bool bNegative)
{ 
  if (a[k]) {
     if (bNegative && a[k]<0) printf("%d ", a[k]);
     if (!bNegative && a[k]>0) printf("%d ", a[k]);
     vivod(a,k+1,bNegative);
}
  }