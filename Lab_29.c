#include <stdio.h>

main()
{
    int first1D[10], second1D[10], third1D[10], i, size = 10, run = 0;
    char finish = 'y';

    while (finish == 'y')
    {
        for (i = 0; i < size; i++)
        {
            first1D[i] = 0;
            second1D[i] = 0;
        }

        printf("Enter number in first array (10 number)");
        for (i = 0; i < size; i++)
        {
            printf("\nFirst[%d] : ", i);
            scanf("%d", &first1D[i]);
        }
        printf("Enter number in second array (10 number)");
        for (i = 0; i < size; i++)
        {
            printf("\nSecond[%d] : ", i);
            scanf("%d", &second1D[i]);
        }

        for (i = 0; i < size; i++)
        {
            third1D[i] = first1D[i] + second1D[i];
        }
        printf("Sum Array Result is : ");
        for (i = 0; i < size; i++)
        {
            printf(" %d ", third1D[i]);
        }

        while (run == 0)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 1;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }
        if (finish == 'N')
        {
            printf("\"End Program\"");
        }
    }
}