#include <stdio.h>
// score = 5
main()
{
    char flight, tf, con = 'y';
    float time;
    int next = 0;

    while (con == 'y')
    {
        printf("Search By Departure Press:(D) Time or Arrival Press:(A) ? : ");
        scanf(" %c", &flight);

        if (flight == 'D')
        {
            printf("Search By Departure Time\n");

            while ((tf != 'P' || tf != 'A') && next == 0)
            {
                printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
                scanf(" %c", &tf);

                if (tf == 'A')
                {
                    printf("Enter Departure Time (H.mm): ");
                    scanf("%f", &time);

                    if (time > 7.99 && time < 8.01)
                    {
                        printf("\"Departure Time : 08.00 AM  and  Arrival Time : 10.16 AM\" \n\n");
                        next = 1;
                    }

                    else if (time > 9.429 && time < 9.431)
                    {
                        printf("\"Departure Time : 09.43 AM  and  Arrival Time : 11.52 AM\" \n\n");
                        next = 1;
                    }
                    else if (time > 11.189 && time < 11.191)
                    {
                        printf("\"Departure Time : 11.19 AM  and  Arrival Time : 01.31 PM\" \n\n");
                        next = 1;
                    }
                    else
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
                if (tf == 'P')
                {
                    printf("Enter Departure Time (H.mm): ");
                    scanf("%f", &time);

                    if (time > 12.469 && time < 12.471)
                    {
                        printf("\"Departure Time : 12.47 PM  and  Arrival Time : 03.00 PM\" \n\n");
                        next = 1;
                    }
                    else if (time > 1.99 && time < 2.01)
                    {
                        printf("\"Departure Time : 02.00 PM  and  Arrival Time : 04.08 PM\" \n\n");
                        next = 1;
                    }
                    else if (time > 3.449 && time < 3.451)
                    {
                        printf("\"Departure Time : 03.45 PM  and  Arrival Time : 05.55 PM\" \n\n");
                        next = 1;
                    }
                    else
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
            }
        }
        if (flight == 'A')
        {
            printf("Search By Arrival Time \n");

            while ((tf != 'P' || tf != 'A') && next == 0)
            {
                printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
                scanf(" %c", &tf);

                if (tf == 'A')
                {
                    printf("Enter Arrival Time (H.mm): ");
                    scanf("%f", &time);

                    if (time > 10.159 && time < 10.161)
                    {
                        printf("\"Arrival Time : 10.16 AM  and  Departure Time : 08.00 AM\" \n\n");
                        next = 1;
                    }

                    else if (time > 11.519 && time < 11.521)
                    {
                        printf("\"Arrival Time : 11.52 AM  and  Departure Time : 09.43 AM\" \n\n");
                        next = 1;
                    }
                    else
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
                if (tf == 'P')
                {

                    printf("Enter Arrival Time (H.mm): ");
                    scanf("%f", &time);

                    if (time > 1.309 && time < 1.311)
                    {
                        printf("\"Arrival Time : 01.31 PM and Departure Time : 11.19 AM \" \n\n");
                        next = 1;
                    }
                    else if (time > 2.99 && time < 3.01)
                    {
                        printf("\"Arrival Time : 03.00 PM and Departure Time : 12.47 AM\" \n\n");
                        next = 1;
                    }
                    else if (time > 4.079 && time < 4.081)
                    {
                        printf("\"Arrival Time : 04.08 PM and Departure Time : 02.00 PM\" \n\n");
                        next = 1;
                    }
                    else if (time > 5.549 && time < 5.551)
                    {
                        printf("\"Arrival Time : 05.55 PM and Departure Time : 03.45 PM\" \n\n");
                        next = 1;
                    }
                    else
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
            }
        }
        while (next == 1)
        {
            printf("Continue Program ?(y/N) : ");
            scanf(" %c", &con);
            if (con == 'y' || con == 'N')
            {
                next = 0;
            }
        }
        while (con == 'N')
        {
            printf("\"End Program\"");
            break;
        }
        next = 0;
        printf("\n\n");
    }
}