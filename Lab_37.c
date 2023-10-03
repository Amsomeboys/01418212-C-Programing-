#include <stdio.h>
main()
{
    float arr[3][3][3], *p, sum;
    int i, j, k, size = 3, run;
    char finish = 'y';

    while (finish == 'y')
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    arr[i][j][k] = 0;
                }
            }
        }

        printf("Enter number in Array3D\n\n");
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    printf("Arr[%d][%d][%d] : ", i, j, k);
                    scanf("%f", &arr[i][j][k]);
                }
            }
        }
        printf("\n\n");
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                for (k = 0; k < size; k++)
                {
                    p = &arr[i][j][k];
                    sum += *p;
                    printf("%u : %.2f\n", p, *p);
                }
            }
        }
        printf("\nSum of array by pointer is :%.2f", sum);
        run = 1;

        while (run == 1)
        {
            printf("\n\ncontinue Program? (y/N): ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                p = 0;
                sum = 0;
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