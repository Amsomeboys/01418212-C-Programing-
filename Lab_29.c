#include <stdio.h>
main()
{
    float first1D[10], second1D[10], third1D[10];
    int i, size = 10, run = 0;
    char finish = 'y';
    while (finish == 'y')
    {
        for (i = 0; i < size; i++)
        {
            first1D[i] = 0;
            second1D[i] = 0;
        }
        printf("Enter number in first array (10 number)\n");
        for (i = 0; i < size; i++)
        {
            printf("First[%d] : ", i);
            scanf("%f", &first1D[i]);
        }
        printf("\nEnter number in second array (10 number)\n");
        for (i = 0; i < size; i++)
        {
            printf("Second[%d] : ", i);
            scanf("%f", &second1D[i]);
        }

        for (i = 0; i < size; i++)
        {
            third1D[i] = first1D[i] + second1D[i];
        }
        printf("\nSum Array Result is  \n");
        for (i = 0; i < size; i++)
        {
            printf("\nSumArr[%d] : ", i);
            printf(" %.2f ", third1D[i]);
            printf("\n");
        }
        run = 1;
        while (run == 1)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
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
            printf("\"End Program\"\n\n");
        }
    }
}