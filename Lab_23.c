#include <stdio.h>

// editing yet
main()
{
    char flight, tf, con = 'y';
    float time;
    int next = 0;
    int error = 1;

    while (flight != 'q' && con == 'y' && next == 0)
    {
        printf("Search By Departure Press:(D) Time or Arrival Press:(A) ? : ");
        scanf(" %c", &flight);

        while (flight == 'D' && next == 0)
        {
            printf("Search By Departure Time\n");
            next++;
            while (flight == 'D' && next == 1 && (tf != 'P' || tf != 'A'))
            {
                printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
                scanf(" %c", &tf);

                while (tf == 'A' && next == 1 && error == 1)
                {
                    printf("Enter Departure Time (H.mm): ");
                    scanf("%f", &time);
                    next++;

                    while (time > 7.99 && time < 8.01 && next == 2)
                    {
                        printf("\"Departure Time : 08.00 AM  and  Arrival Time : 10.16 AM\" \n\n");
                        next++;
                    }

                    while (time > 9.429 && time < 9.431 && next == 2)
                    {
                        printf("\"Departure Time : 09.43 AM  and  Arrival Time : 11.52 AM\" \n\n");
                        next++;
                    }
                    while (time > 11.189 && time < 11.191 && next == 2)
                    {
                        printf("\"Departure Time : 11.19 AM  and  Arrival Time : 01.31 PM\" \n\n");
                        next++;
                    }
                    while (next == 2)
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
                while (tf == 'P' && next == 1 && error == 1)
                {
                    printf("Enter Departure Time (H.mm): ");
                    scanf("%f", &time);
                    next++;

                    while (time > 12.469 && time < 12.471 && next == 2)
                    {
                        printf("\"Departure Time : 12.47 PM  and  Arrival Time : 03.00 PM\" \n\n");
                        next++;
                    }
                    while (time > 1.99 && time < 2.01 && next == 2)
                    {
                        printf("\"Departure Time : 02.00 PM  and  Arrival Time : 04.08 PM\" \n\n");
                        next++;
                    }
                    while (time > 3.449 && time < 3.451 && next == 2)
                    {
                        printf("\"Departure Time : 03.45 PM  and  Arrival Time : 05.55 PM\" \n\n");
                        next++;
                    }
                    while (next == 2)
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
            }
        }
        while (flight == 'A' && next == 0)
        {
            printf("Search By Arrival Time \n");
            next++;

            while (flight == 'A' && next == 1 && tf != 'P' || tf != 'A')
            {
                printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
                scanf(" %c", &tf);

                while (tf == 'A' && next == 1 && error == 1)
                {
                    printf("Enter Arrival Time (H.mm): ");
                    scanf("%f", &time);
                    next++;

                    while (time > 10.159 && time < 10.161 && next == 2)
                    {
                        printf("\"Arrival Time : 10.16 AM  and  Departure Time : 08.00 AM\" \n\n");
                        next++;
                        error = 0;
                    }

                    while (time > 11.519 && time < 11.521 && next == 2)
                    {
                        printf("\"Arrival Time : 11.52 AM  and  Departure Time : 09.43 AM\" \n\n");
                        next++;
                        error = 0;
                    }
                    while (next == 2)
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
                while (tf == 'P' && next == 1 && error == 1)
                {

                    printf("Enter Arrival Time (H.mm): ");
                    scanf("%f", &time);
                    next++;

                    while (time > 1.309 && time < 1.311 && next == 2)
                    {
                        printf("\"Arrival Time : 01.31 PM and Departure Time : 11.19 AM \" \n\n");
                        next++;
                        error = 0;
                    }
                    while (time > 2.99 && time < 3.01 && next == 2)
                    {
                        printf("\"Arrival Time : 03.00 PM and Departure Time : 12.47 AM\" \n\n");
                        next++;
                        error = 0;
                    }
                    while (time > 4.079 && time < 4.081 && next == 2)
                    {
                        printf("\"Arrival Time : 04.08 PM and Departure Time : 02.00 PM\" \n\n");
                        next++;
                        error = 0;
                    }
                    while (time > 5.549 && time < 5.551 && next == 2)
                    {
                        printf("\"Arrival Time : 05.55 PM and Departure Time : 03.45 PM\" \n\n");
                        next++;
                        error = 0;
                    }
                    while (next == 2)
                    {
                        printf("\"No flight information of the this time\" \n\n");
                        next = 1;
                    }
                }
            }
        }
        while (next < 4)
        {
            printf("Continue Program ?(y/N) :\n");
            scanf(" %c", &con);
            next = 5;
        }
        while (con == 'N')
        {
            printf("\"End Program\"");
            break;
        }
        next = 0;
    }
}