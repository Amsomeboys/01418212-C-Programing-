#include <stdio.h>
main()
{
    int arr1D[3], arr2D[3][3], arr3D[3][3][3], *p1, *p2, *p3, size = 3, i, j, k;
    p1 = &arr1D[0];
    p2 = &arr2D[0][0];
    p3 = &arr3D[0][0][0];
    for (i = 0; i < size; i++)
    {
        arr1D[i] = 0;
        for (j = 0; j < size; j++)
        {
            arr2D[i][j] = 0;
            for (k = 0; k < size; k++)
            {
                arr3D[i][j][k] = 0;
            }
        }
    }

    for (i = 0; i < size; i++)
    {

        printf("\nArr1D[%d] : %u", i, p1 + i);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("\nArr2D[%d][%d] : %u", i, j, p2++);
        }
    }
    printf("\n");2
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            for (k = 0; k < size; k++)
            {
                printf("\nArr3D[%d][%d][%d] : %u", i, j, k, p3++);
            }
        }
    }
    printf("\n\n");
}
