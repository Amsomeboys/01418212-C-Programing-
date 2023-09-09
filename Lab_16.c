#include <stdio.h>
// score = 3
main()
{

    float speed = 0;
    int finish = 0;
    char con = 'y';

    while (con == 'y')
    {
        printf("Please enter Wind Speed (knots) : ");
        scanf("%f", &speed);
        printf("\n");
        while (speed < 0)
        {
            printf("\"Enter more than or equal 0\"\n");
            speed = 0;
            finish = 1;
        }
        while (speed >= 0 && finish == 0)
        {
            while (speed >= 0 && speed < 1.00 && finish == 0)
            {
                printf(" Description : Calm");
                finish = 1;
                speed = 0;
            }
            while (speed >= 1.00 && speed < 3.5 && finish == 0)
            {
                printf("Description : Light Air");
                finish = 1;
                speed = 0;
            }
            while (speed >= 3.5 && speed < 27.5 && finish == 0)
            {
                printf("Description : Breeze");
                finish = 1;
                speed = 0;
            }
            while (speed >= 27.5 && speed < 47.5 && finish == 0)
            {
                printf("Description : Gale");
                finish = 1;
                speed = 0;
            }
            while (speed >= 47.5 && speed < 63.5 && finish == 0)
            {
                printf("Description : Storm");
                finish = 1;
                speed = 0;
            }
            while (speed >= 63.5 && finish == 0)
            {
                printf("Description : Hurricane");
                finish = 1;
                speed = 0;
            }
            printf("\n\n");
            while (finish == 1)
            {
                printf("Continue Program ?(y/N) :");
                scanf(" %c", &con);
                speed = 0;
                finish = 2;
            }
            while (con == 'N')
            {
                printf("\"End Program\"");
                break;
            }
        }
        finish = 0;
        printf("\n\n");
    }
}