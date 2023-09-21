#include <stdio.h>

main()
{
    float one2D[5][5], two2D[5][5], three2D[5][5], sum = 0, avg = 0;
    int size, i, j, run = 0;
    char finish = 'y';

    while (finish == 'y')
    {
        printf("Enter size of array (maximum = 5) : ");
        scanf("%d", &size);
        printf("\n");
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                one2D[i][j] = 0;
                two2D[i][j] = 0;
                three2D[i][j] = 0;
            }
        }

        printf("Enter number in first array (%d x %d) \n", size, size);
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {

                printf("First[%d][%d] : ", i, j);
                scanf("%f", &one2D[i][j]);
            }
        }

        printf("\nEnter number in second array (5) : ");
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                printf("\nSecond[%d][%d] : ", i, j);
                scanf("%f", &two2D[i][j]);
            }
        }

        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                three2D[i][j] = one2D[i][j] * two2D[i][j];
                printf("\nThree[%d][%d] : %.2f", i, j, three2D[i][j]);
            }
        }

        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                sum += three2D[i][j];
            }
        }
        avg = sum / (size * size);
        printf("\n\nAverage of multipy value in array is = %.2f ", avg);
        run = 1;
        while (run == 1)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            printf("\n\n");
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
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