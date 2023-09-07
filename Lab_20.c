#include <stdio.h>
// score = 5
main()
{
    char first, second, third, fourth, fifth, blank;
    int work = 0;
    char con = 'y';

    while (con == 'y')
    {
        first = '0';
        second = '0';
        third = '0';
        fourth = '0';
        fifth = '0';

        printf("Enter First Word : ");
        scanf(" %c", &first);
        if (first < 'A')
        {
            printf("\"Enter only character\"\n\n");
        }

        if (first >= 'A')
        {
            while (second < 'A')
            {
                printf("Enter Second Word : ");
                scanf(" %c", &second);
                if (second < 'A')
                {
                    printf("\"Enter only character\"\n\n");
                }
            }

            while (third < 'A')
            {
                printf("Enter Third Word : ");
                scanf(" %c", &third);
                if (third < 'A')
                {
                    printf("\"Enter only character\"\n\n");
                }
            }

            while (fourth < 'A')
            {
                printf("Enter Fourth Word : ");
                scanf(" %c", &fourth);
                if (fourth < 'A')
                {
                    printf("\"Enter only character\"\n");
                }
            }

            while (fifth < 'A')
            {
                printf("Enter Fifth Word : ");
                scanf(" %c", &fifth);
                if (fifth < 'A')
                {
                    printf("\"Enter only character\"\n");
                }
            }

            if (first > second)
            {
                blank = second;
                second = first;
                first = blank;
            }
            if (second > third)
            {
                blank = second;
                second = third;
                third = blank;
            }
            if (third > fourth)
            {
                blank = third;
                third = fourth;
                fourth = blank;
            }
            if (fourth > fifth)
            {
                blank = fourth;
                fourth = fifth;
                fifth = blank;
            }

            printf("\n\n \"result : %c %c %c %c %c\"", first, second, third, fourth, fifth);
            printf("\n");
            work = 1;
        }
        while (work == 1)
        {
            printf("\n\nContinue Program ? (y/N): ");
            scanf(" %c", &con);
            if (con == 'y' || con == 'N')
            {
                work = 0;
            }
            else
            {
                printf("\"Enter 'y' or 'N' only\"");
                work = 1;
            }
        }

        if (con == 'N')
        {
            printf("\n\"End Program\"\n\n");
            break;
        }
        printf("\n");
    }
}