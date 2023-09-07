#include <stdio.h>
// score = 5
main()
{

    int start, end, count;
    int i, j, prime = 0;
    char con = 'y';

    while (con == 'y')
    {
        printf("Please Input Start Number : ");
        scanf("%d", &start);
        if (start < 1)
        {
            printf("\"Enter Input more than 0 \"\n\n");
        }
        if (start >= 1)
        {
            printf("\nPlease Input End Number : ");
            scanf("%d", &end);

            if (start > end)
            {
                printf("\n\"Please enter start number more than end number\"");
            }

            if (start > 0 && end > 0)
            {
                printf("\nPrime numbers in this range is : ");

                for (i = start; i <= end; i++)
                {
                    count = 0;

                    for (j = 1; j <= i; j++)
                    {
                        if (i % j == 0)
                        {
                            count++;
                        }
                    }

                    if (count == 2)
                    {
                        printf("%d ", i);
                        prime++;
                    }
                }
                if (prime == 0)
                {
                    printf("\"No prime number in this range\"");
                }
            }
            while (prime > 0)
            {
                printf("\n\nContinue Program ? (y/N): ");
                scanf(" %c", &con);
                if (con == 'y' || con == 'N')
                {
                    prime = 0;
                }
                else
                {
                    printf("\"Enter 'y' or 'N' only\"");
                    prime = 1;
                }
            }

            if (con == 'N')
            {
                printf("\n\"End Program\"\n\n");
                break;
            }
            printf("\n\n");
        }
    }
}