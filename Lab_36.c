#include <stdio.h>
main()
{
    float arr[20];
    float *index, avg, sum;
    int i, run = 0;
    char finish = 'y';

    index = &arr[0];

    while (finish == 'y')
    {
        for (i = 0; i < 20; i++)
        {
            arr[i] = 0;
        }
        printf("Enter number in Array\n");
        for (i = 0; i < 20; i++)
        {
            printf("Arr[%d] : ", i);
            scanf("%f", &arr[i]);
        }
        for (i = 0; i < 100; i++)
        {
            printf("-");
        }
        printf("\n\n");
        printf("\"Value Pointer of Array\"\n\n");
        for (i = 0; i < 20; i++)
        {
            sum += *(index + i);
        }
        for (i = 0; i < 20; i++)
        {
            printf("Pointer value [%u] : %.2f \n", index + i, *(index + i));
        }

        avg = sum / 20;
        printf("\nAverage of array by pointer is %.2f/20 = \"%.2f\"", sum, avg);
        run = 1;

        while (run == 1)
        {
            printf("\n\ncontinue Program? (y/N): ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                index = 0;
                avg = 0;
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
