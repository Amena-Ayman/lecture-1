#include <stdio.h>
#include <stdlib.h>

   int x;
   int i;
int func()
{
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
}
int main()
{
   printf("please enter x");
   scanf("%i",&x);
   func();
   return 0;
}
