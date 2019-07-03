#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int x;
     int y=1;
     int z;
int main()
{
   printf("please enter x");
   scanf("%i",&x);

   z=x;

   while(y<=6)
   {

       printf("\n the value of x is=%i",x);
       x=x*z;
       y++;

   }

/* for(int y=1;y<=6;y++)
   {
       printf("\n the value of x is=%i",x);
       x=x*z;
   }*/
    return 0;
}
