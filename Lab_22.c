#include <stdio.h>
main()
 {

    float speed ;
    int finish =0;

while(finish == 0)
{
        printf("Please enter Wind Speed (knots) OR Enter -1 to stop program  : ");
        scanf("%f",&speed);
    if(speed == -1 )
    {
        printf("\nEnd Program");
        finish =1;

    }
    printf("\n");
    if(speed >= 0  && speed <1.00)
    {
        printf(" Description : Calm");


    }
    if(speed >= 1.00 && speed < 3.5 )
    {
        printf("Description : Light Air");


    }
     if(speed >= 3.5 && speed < 27.5 )
    {
        printf("Description : Breeze");


    }
    if (speed >= 27.5 && speed < 47.5 )
    {
        printf("Description : Gale");


    }
    if (speed >= 47.5 && speed < 63.5 )
    {
        printf("Description : Storm");


    }
      if (speed >= 63.5)
    {
        printf("Description : Hurricane");


    }
    printf("\n\n");

}

 }