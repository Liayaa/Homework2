#include <stdio.h>

int main( )
{
  int i,j;
  
 for (i = 15; i <= 95; i = i + 10)
 {
     for (j = 15; j <= i; j = j + 10)
     {
        printf("%d*%d ",i,j,i*j);
     }     
     putchar('\n');
 }	 

          return 0;
}
