#include <stdio.h>
main()
{
    float arr[3][3][3], *p, sum;
    int i, j, k, size = 3;

    p = &arr;

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
                scanf("%f", arr[i][j][k]);
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            for (k = 0; k < size; k++)
            {
                sum += *(p + k)
            }
        }
    }

    // for (i = 0; i < size; i++)
    // {
    //     for (j = 0; j < size; j++)
    //     {
    //         for (k = 0; k < size; k++)
    //         {
    //             sum += *(p + i);
    //             printf("\nsum %.2f", sum);
    //         }
    //     }
    // }
}
