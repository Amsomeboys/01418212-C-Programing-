#include <stdio.h>
// score = 5
main()
{
    char first, second, third, fourth, fifth, blank, end = 'y';

    int work = 0;

    while (work == 0 && end == 'y')
    {
        first = '0';
        second = '0';
        third = '0';
        fourth = '0';
        fifth = '0';
        while (work == 0)
        {
            printf("Enter First Word : ");
            scanf(" %c", &first);
            work = 1;
        }
        while (first < 'A' && work == 1)
        {
            printf("\n\"Enter only character\"\n");
            work = 0;
        }

        while (work == 1)
        {
            while (first >= 'A' && second < 'A')
            {
                printf("Enter Second Word : ");
                scanf(" %c", &second);
            }
            while (second < 'A')
            {
                printf("\n\"Enter only character\"\n");
                break;
            }
            while (second >= 'A' && third < 'A')
            {
                printf("Enter Third Word : ");
                scanf(" %c", &third);
            }
            while (third < 'A')
            {
                printf("\n\"Enter only character\"\n");
                break;
            }
            while (third >= 'A' && fourth < 'A')
            {
                printf("Enter Fourth Word : ");
                scanf(" %c", &fourth);
            }
            while (fourth < 'A')
            {
                printf("\n\"Enter only character\"\n");
                break;
            }
            while (fourth >= 'A' && fifth < 'A')
            {
                printf("Enter Fifth Word : ");
                scanf(" %c", &fifth);
            }
            while (fifth < 'A')
            {
                printf("\n\"Enter only character\"\n");
                break;
            }
            while (first >= 'A' && second >= 'A' && third >= 'A' && fourth >= 'A' && fifth >= 'A' && work == 1)
            {
                while (first > second || second > third || third > fourth || fourth > fifth)
                {
                    while (first > second)
                    {
                        blank = second;
                        second = first;
                        first = blank;
                    }
                    while (second > third)
                    {
                        blank = second;
                        second = third;
                        third = blank;
                    }
                    while (third > fourth)
                    {
                        blank = third;
                        third = fourth;
                        fourth = blank;
                    }
                    while (fourth > fifth)
                    {
                        blank = fourth;
                        fourth = fifth;
                        fifth = blank;
                    }
                }

                printf("\n \"result : %c %c %c %c %c\"", first, second, third, fourth, fifth);
                printf("\n\n");
                work = 0;
            }
            while (work == 0)
            {
                printf("\n\"Continue ? (y/N) : \"");
                scanf(" %c", &end);
                work = 2;
            }
            while (end == 'N')
            {
                printf("\n\"End Program\"\n\n");
                break;
            }
        }
        work = 0;
    }
}