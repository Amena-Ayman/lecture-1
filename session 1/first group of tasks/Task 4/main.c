#include <stdio.h>
#include <stdlib.h>

int main()
{  int x;
   int i;
   printf("please enter x");
   scanf("%i",&x);
   for ( i=1;i<=x/2;i++)
   {
       printf("\t x=%i",i) ;
   }
   printf("\t x=%i",x);
   for (i=x/2+1;i<x;i++)
    {
       printf("\t x=%i",i) ;
   }
    printf("\t x=%i",x*2);
    return 0;
}
