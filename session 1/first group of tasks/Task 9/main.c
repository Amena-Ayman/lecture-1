#include <stdio.h>
#include <stdlib.h>

  int s;

int func1()
    {
        int x;
   printf("please enter condition's number");
   scanf("%i",&x);
   switch (x)
    {
        case 1:
        printf("Machine is On");
        break;

        case 2:
         printf("Machine is Off");
        break;

        case 3:
         printf("Machine is Working");
        break;

        case 4:
         printf("Robot is Moving");

        break;

        case 5:
         printf("Robot Stopped");
        break;

        case 6:
         printf("Connection Error");
        break;

        case 7:
         printf("Connection Works");
        break;

        case 8:
         printf("Connection Returned");
        break;

        case 9:
         printf("Power Low");
        break;

        case 10:
         printf("Power Charging");
        break;

        default:
         printf("Error");
         break;
   }
    return 0;
}

int func2()
{
   int  i,x,y;
   printf("please enter x");
   scanf("%i",&x);

   printf("please enter y");
   scanf("%i",&y);


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
    return 0;
}
 int func3()
 {
    int x;
     int y=1;
     int z;
     printf("please enter x");
   scanf("%i",&x);

   z=x;

   while(y<=6)
   {

       printf("\n the value of x is=%i",x);
       x=x*z;
       y++;

   }
return 0;
 }

int func4()
{
     int x;
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

int main()
{
   printf("please enter function's number");
   scanf("%i",&s);

   if (s==1)
   {
       func1();
   }

   if (s==2)
   {
       func2();
   }

   if (s==3)
   {
       func3();
   }

   if (s==4)
   {
       func4();
   }

   else
    {
    printf("Error");
   }
   return 0;
}
