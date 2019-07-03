#include <stdio.h>
#include <stdlib.h>

int main()
{  int x;
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
