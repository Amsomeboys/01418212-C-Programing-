#include <stdio.h>
main()
 {

    float speed =0 ;
    int finish =0;

while(speed == 0 && finish == 0)
{
    printf("Please enter Wind Speed (knots) OR Enter -1 to stop program  : ");
    scanf("%f",&speed);
    while(speed == -1 && finish != 1)
    {
        printf("\nEnd Program");
        finish =1;

    }
  	printf("\n");
    while (speed < 1.00 && finish != 1)
    {
        printf(" Description : Calm");
        finish =1;
        speed =0;
    }
    while (speed >= 1.00 && speed < 3.5 && finish != 1)
    {
        printf("Description : Light Air");
        finish = 1;
        speed =0;
    }
    while (speed >= 3.5 && speed < 27.5 && finish != 1)
    {
        printf("Description : Breeze");
        finish = 1;
        speed =0;
    }
    while (speed >= 27.5 && speed < 47.5 && finish != 1)
    {
        printf("Description : Gale");
        finish =1;
        speed =0;
    }
    while (speed >= 47.5 && speed < 63.5 && finish != 1)
    {
        printf("Description : Storm");
        finish = 1;
        speed =0;
    }
      while (speed >= 63.5 && finish != 1)
    {
        printf("Description : Hurricane");
        finish = 1;
        speed =0;
    }
    printf("\n\n");
    finish = 0;
}
}