#include <stdio.h>
#include <stdlib.h>

     int x;
     int y=1;
     int z;

      int power()
      {
          while(y<=6)
   {

       printf("\n the value of x is=%i",x);
       x=x*z;
       y++;

   }
      }

int main()
{
    printf("please enter x");
   scanf("%i",&x);

   z=x;
   power();
   return 0;
}
