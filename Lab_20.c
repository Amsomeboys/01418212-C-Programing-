#include <stdio.h>

main()
{
    char first,second,third,fourth,fifth,blank;
    int work = 0 ;


    while(work == 0)
    {
        printf("Enter First Word OR Enter \"/\" to stop program): ");
        scanf(" %c",&first);

        if(first == '/')
        {
            printf("\n\"End Program\"\n\n");
            work = 1;
        }

        if(first != '/' )
        {

        printf("Enter Second Word : ");
        scanf(" %c",&second);

        printf("Enter Third Word : ");
        scanf(" %c",&third);

        printf("Enter Fourth Word : ");
        scanf(" %c",&fourth);

        printf("Enter Fifth Word : ");
        scanf(" %c",&fifth);



            if(first > second)
            {
                blank = second;
                second =first;
                first = blank;
            }
            if(second > third)
            {
                blank = second;
                second = third;
                third = blank;
            }
             if(third > fourth)
            {
                blank = third;
                third = fourth;
                fourth =blank;
            }
            if(fourth > fifth)
            {
                blank = fourth;
                fourth = fifth;
                fifth =blank;
            }



              printf("\n \"result : %c %c %c %c %c\"",first,second,third,fourth,fifth);
              printf("\n\n");

        }
    }
}