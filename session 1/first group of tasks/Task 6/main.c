#include <stdio.h>
#include <stdlib.h>

 int  i,x,y;
int func()
{
    for(i=1;i<=x;i++)
   {
       if(i%y==0)
       {
       printf(" ");
       }
      else
      {
       printf("\t %i", i);
      }
   }
}
int main()
{

   printf("please enter x");
   scanf("%i",&x);

   printf("please enter y");
   scanf("%i",&y);

   func();


   return 0;
}
