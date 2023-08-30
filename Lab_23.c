#include <stdio.h>

main()
{
    char flight,tf;
    float time;
    int next =0;
    int error =1;

    while(flight != 'q' && next == 0)
    {
        printf("Search By Departure Press:(D) Time or Arrival Press:(A) ? (press q to end program) : ");
        scanf(" %c",&flight);

        if(flight == 'q' )
        {
            printf("\n\"End Program\"\n\n");
        }

        if(flight == 'D')
        {
            printf("\nSearch By Departure Time\n\n");

            printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
            scanf(" %c",&tf);

                 if(tf == 'A' )
                {
                    printf("\nEnter Departure Time (H.mm): ");
                    scanf("%f",&time);


                     if(time > 7.99 && time < 8.01 )
                    {
                        printf("\n\"Departure Time : 08.00 AM  and  Arrival Time : 10.16 AM\" \n\n");

                    }

                     else if(time > 9.429 && time < 9.431 )
                    {
                        printf("\n\"Departure Time : 09.43 AM  and  Arrival Time : 11.52 AM\" \n\n");

                    }
                     else if(time > 11.189 && time < 11.191 )
                    {
                        printf("\n\"Departure Time : 11.19 AM  and  Arrival Time : 01.31 PM\" \n\n");

                    }
                     else
                    {
                        printf("\n\"No flight information of the this time\" \n\n");

                    }

                }
                if(tf == 'P')
                {
                    printf("\nEnter Departure Time (H.mm): ");
                    scanf("%f",&time);


                    if(time > 12.469 && time < 12.471 )
                    {
                    printf("\n\"Departure Time : 12.47 PM  and  Arrival Time : 03.00 PM\" \n\n");

                    }
                   else if(time > 1.99 && time < 2.01 )
                    {
                    printf("\n\"Departure Time : 02.00 PM  and  Arrival Time : 04.08 PM\" \n\n");

                    }
                   else if(time > 3.449 && time < 3.451 )
                    {
                    printf("\n\"Departure Time : 03.45 PM  and  Arrival Time : 05.55 PM\" \n\n");

                    }
                   else
                    {
                        printf("\n\"No flight information of the this time\" \n\n");
                        next =1;
                    }
                }

            }
        }
        if(flight == 'A' )
        {
            printf("\nSearch By Arrival Time \n\n");
            next++;

            if(flight =='A' )
            {
                printf("Post Meridiem Press:(P) or Ante Meridiem Press:(A) : ");
                scanf(" %c",&tf);

                printf("\nEnter Arrival Time (H.mm): ");
                scanf("%f",&time);
                next++;

                     if(time > 10.159 && time < 10.161 )
                    {
                        printf("\n\"Arrival Time : 10.16 AM  and  Departure Time : 08.00 AM\" \n\n");

                    }

                     else if(time > 11.519 && time < 11.521 )
                    {
                        printf("\n\"Arrival Time : 11.52 AM  and  Departure Time : 09.43 AM\" \n\n");


                    }
                     else
                    {
                        printf("\n\"No flight information of the this time\" \n\n");

                    }

                }
                if(tf == 'P')
                {

                    printf("\nEnter Arrival Time (H.mm): ");
                    scanf("%f",&time);


                    if(time > 1.309 && time < 1.311 )
                    {
                    printf("\n\"Arrival Time : 01.31 PM and Departure Time : 11.19 AM \" \n\n");

                    }
                    else if(time > 2.99 && time < 3.01 )
                    {
                    printf("\n\"Arrival Time : 03.00 PM and Departure Time : 12.47 AM\" \n\n");

                    }
                    else if(time > 4.079 && time < 4.081 )
                    {
                    printf("\n\"Arrival Time : 04.08 PM and Departure Time : 02.00 PM\" \n\n");

                    }
                    else if(time > 5.549 && time < 5.551 )
                    {
                    printf("\n\"Arrival Time : 05.55 PM and Departure Time : 03.45 PM\" \n\n");

                    }
                    else
                    {
                        printf("\n\"No flight information of the this time\" \n\n");

                    }
                }

            }
        }


