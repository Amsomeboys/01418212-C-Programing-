#include <stdio.h>
main()
{
    float one2D[5][5], two2D[5][5], three2D[5][5], sum = 0, avg = 0;
    int w_size = 0, h_size = 0, i, j, run = 0;
    char finish = 'y';

    while (finish == 'y')
    {
        while (w_size <= 0 || w_size > 5)
        {
            printf("Enter width size of array (maximum = 5) : ");
            scanf("%d", &w_size);
            printf("\n");
            if (w_size <= 0 || w_size > 5)
            {
                printf("\"Enter 1 - 5\"\n\n");
            }
        }

        while (h_size <= 0 || h_size > 5)
        {
            printf("Enter height size of array (maximum = 5) : ");
            scanf("%d", &h_size);
            printf("\n");
            if (h_size <= 0 || h_size > 5)
            {
                printf("\"Enter 1 - 5\"\n\n");
            }
        }
        for (i = 0; i < h_size; i++)
        {
            for (j = 0; j < w_size; j++)
            {
                one2D[i][j] = 0;
                two2D[i][j] = 0;
                three2D[i][j] = 0;
            }
        }
        printf("Enter number in first array (%d x %d) \n", w_size, h_size);
        for (i = 0; i < h_size; i++)
        {
            for (j = 0; j < w_size; j++)
            {
                printf("First[%d][%d] : ", i, j);
                scanf("%f", &one2D[i][j]);
            }
        }
        printf("\nEnter number in second array (%d x %d) \n", w_size, h_size);
        for (i = 0; i < h_size; i++)
        {
            for (j = 0; j < w_size; j++)
            {
                printf("Second[%d][%d] : ", i, j);
                scanf("%f", &two2D[i][j]);
            }
        }
        printf("\nMultipy Array is (%d x %d) \n", w_size, h_size);
        for (i = 0; i < h_size; i++)
        {
            for (j = 0; j < w_size; j++)
            {
                three2D[i][j] = one2D[i][j] * two2D[i][j];
                printf("\nThree[%d][%d] : %.2f", i, j, three2D[i][j]);
            }
        }
        for (i = 0; i < h_size; i++)
        {
            for (j = 0; j < w_size; j++)
            {
                sum += three2D[i][j];
            }
        }
        avg = sum / (w_size * h_size);
        printf("\n\nAverage of multipy value in array is  %.2f / %d  = \"%.2f\" ", sum,w_size*h_size,avg);
        run = 1;
        while (run == 1)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            printf("\n");
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                w_size = 0;
                h_size = 0;
                sum=0;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }
        if (finish == 'N')
        {
            printf("\"End Program\"\n");
        }
    }
}